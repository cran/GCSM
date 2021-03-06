#include <RcppArmadillo.h>
using namespace arma;

//' @rdname gcsm_sw
//' @param sigma Standard deviation of Gaussian weighting function
//' depending on the distance between the cell and kernel center.
//' @export
// [[Rcpp::export]]
arma::mat ssim_sw(arma::mat x, arma::mat y, bool rescale = false,
                  double xmin = NA_REAL, double xmax = NA_REAL,
                  double ymin = NA_REAL, double ymax = NA_REAL,
                  double ksize = 11, double sigma = 1.5, bool globe = false,
                  std::string comp = "si") {
  if (comp != "si" && comp != "s1" && comp != "s2" && comp != "s3")
    Rcpp::stop("comp should be 'si' or 's1', 's2', 's3'!");
  if (x.has_nan() || y.has_nan()) {
    x.elem(find_nonfinite(y)).fill(datum::nan);
    y.elem(find_nonfinite(x)).fill(datum::nan);
    if (find_finite(x).is_empty()) Rcpp::stop("x and y have no valid overlap!");
  }
  if (!std::isfinite(xmin)) xmin = x.min();
  if (!std::isfinite(xmax)) xmax = x.max();
  if (!std::isfinite(ymin)) ymin = y.min();
  if (!std::isfinite(ymax)) ymax = y.max();
  if (xmin > xmax) Rcpp::stop("xmin > xmax, please reset them!");
  if (ymin > ymax) Rcpp::stop("ymin > ymax, please reset them!");
  if (xmax < x.min() || xmin > x.max()) Rcpp::stop("[xmin, xmax] is beyond the range of x!");
  if (ymax < y.min() || ymin > y.max()) Rcpp::stop("[ymin, ymax] is beyond the range of x!");
  double xymin = (xmin < ymin) ? xmin : ymin;
  double xymax = (xmax > ymax) ? xmax : ymax;
  if (xymin == xymax) Rcpp::stop("global min equals to global max!");
  double maxmmin = xymax - xymin;
  if (rescale) {
    // avoid zero-denominator
    if (xmin == xmax) x.elem(find_finite(x)).ones(); else x = (x-xmin) / (xmax-xmin);
    if (ymin == ymax) y.elem(find_finite(y)).ones(); else y = (y-ymin) / (ymax-ymin);
    maxmmin = 1;
  }

  arma::mat s1 = arma::mat(size(x)).fill(datum::nan);
  arma::mat s2 = arma::mat(size(x)).fill(datum::nan);
  arma::mat s3 = arma::mat(size(x)).fill(datum::nan);
  int rad = floor(0.5 * ksize);
  // pad cols
  arma::mat xheadcols = x.head_cols(rad);
  x.insert_cols(0, x.tail_cols(rad));
  x.insert_cols(x.n_cols, xheadcols);
  arma::mat yheadcols = y.head_cols(rad);
  y.insert_cols(0, y.tail_cols(rad));
  y.insert_cols(y.n_cols, yheadcols);
  if (!globe) {
    x.head_cols(rad).fill(datum::nan);
    x.tail_cols(rad).fill(datum::nan);
    y.head_cols(rad).fill(datum::nan);
    y.tail_cols(rad).fill(datum::nan);
  }
  // pad rows
  arma::mat nanrows = arma::mat(rad, x.n_cols).fill(datum::nan);
  x.insert_rows(0, nanrows);
  x.insert_rows(x.n_rows, nanrows);
  y.insert_rows(0, nanrows);
  y.insert_rows(y.n_rows, nanrows);
  uvec locs = find_finite(x);
  locs = locs.elem(find(locs >= rad * x.n_rows && locs <= x.n_elem - 1 - rad * x.n_rows));
  int nlocs = locs.n_elem;
  double c1 = pow(0.01 * maxmmin, 2);
  double c2 = pow(0.03 * maxmmin, 2);
  double c3 = c2 / 2;
  arma::vec weight(ksize);
  for (int i = 0; i < ksize; ++i) {
    weight(i) = exp((i - rad) * (i - rad) / (-2 * sigma * sigma));
  }
  weight = weight / accu(weight);
  arma::mat kernel = weight * weight.t();
#ifdef _OPENMP
#pragma omp parallel for
#endif
  for (int loc = 0; loc < nlocs; ++loc) {
    // decalre inside as private variables for parallel
    // "%" here is modulo operator, not elewise multiplication
    int col = locs(loc) / x.n_rows;
    int row = locs(loc) % x.n_rows;
    arma::mat xsubmat = x.submat(row-rad, col-rad, row+rad, col+rad);
    arma::mat ysubmat = y.submat(row-rad, col-rad, row+rad, col+rad);
    uvec inx = find_finite(xsubmat);
    arma::vec xsub = vectorise(xsubmat.elem(inx));
    arma::vec ysub = vectorise(ysubmat.elem(inx));
    arma::vec w = kernel.elem(inx);
    w = w / accu(w);
    double mux = accu(w % xsub);
    double muy = accu(w % ysub);
    double vax = accu(w % (xsub - mux) % (xsub - mux));
    double vay = accu(w % (ysub - muy) % (ysub - muy));
    double covxy = accu(w % (xsub - mux) % (ysub - muy));
    s1(row-rad, col-rad) = (2 * mux * muy + c1) / (mux * mux + muy * muy + c1);
    s2(row-rad, col-rad) = (2 * sqrt(vax) * sqrt(vay) + c2) / (vax + vay + c2);
    s3(row-rad, col-rad) = (covxy + c3) / (sqrt(vax) * sqrt(vay) + c3);
  }
  if (comp == "si") return s1 % s2 % s3;
  if (comp == "s1") return s1;
  if (comp == "s2") return s2;
  if (comp == "s3") return s3;
  // unnecessary
  Rcpp::stop("comp should be 'si' or 's1', 's2', 's3'!");
}
