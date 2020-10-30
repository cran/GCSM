// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cmsc
double cmsc(arma::vec x, arma::vec y, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_cmsc(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc(x, y, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_sw
arma::mat cmsc_sw(arma::mat x, arma::mat y, bool rescale, double xmin, double xmax, double ymin, double ymax, double ksize, bool globe, std::string comp);
RcppExport SEXP _GCSM_cmsc_sw(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP ksizeSEXP, SEXP globeSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type ksize(ksizeSEXP);
    Rcpp::traits::input_parameter< bool >::type globe(globeSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_sw(x, y, rescale, xmin, xmax, ymin, ymax, ksize, globe, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_tw
arma::mat cmsc_tw(arma::cube xxx, arma::cube yyy, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_cmsc_tw(SEXP xxxSEXP, SEXP yyySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type xxx(xxxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type yyy(yyySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_tw(xxx, yyy, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_e1
double cmsc_e1(arma::vec x, arma::vec y, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_cmsc_e1(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_e1(x, y, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_e1_sw
arma::mat cmsc_e1_sw(arma::mat x, arma::mat y, bool rescale, double xmin, double xmax, double ymin, double ymax, double ksize, bool globe, std::string comp);
RcppExport SEXP _GCSM_cmsc_e1_sw(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP ksizeSEXP, SEXP globeSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type ksize(ksizeSEXP);
    Rcpp::traits::input_parameter< bool >::type globe(globeSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_e1_sw(x, y, rescale, xmin, xmax, ymin, ymax, ksize, globe, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_e1_tw
arma::mat cmsc_e1_tw(arma::cube xxx, arma::cube yyy, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_cmsc_e1_tw(SEXP xxxSEXP, SEXP yyySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type xxx(xxxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type yyy(yyySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_e1_tw(xxx, yyy, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_e2
double cmsc_e2(arma::vec x, arma::vec y, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_cmsc_e2(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_e2(x, y, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_e2_sw
arma::mat cmsc_e2_sw(arma::mat x, arma::mat y, bool rescale, double xmin, double xmax, double ymin, double ymax, double ksize, bool globe, std::string comp);
RcppExport SEXP _GCSM_cmsc_e2_sw(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP ksizeSEXP, SEXP globeSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type ksize(ksizeSEXP);
    Rcpp::traits::input_parameter< bool >::type globe(globeSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_e2_sw(x, y, rescale, xmin, xmax, ymin, ymax, ksize, globe, comp));
    return rcpp_result_gen;
END_RCPP
}
// cmsc_e2_tw
arma::mat cmsc_e2_tw(arma::cube xxx, arma::cube yyy, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_cmsc_e2_tw(SEXP xxxSEXP, SEXP yyySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type xxx(xxxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type yyy(yyySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(cmsc_e2_tw(xxx, yyy, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// gcsm
double gcsm(arma::vec x, arma::vec y, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_gcsm(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(gcsm(x, y, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// gcsm_sw
arma::mat gcsm_sw(arma::mat x, arma::mat y, bool rescale, double xmin, double xmax, double ymin, double ymax, double ksize, bool globe, std::string comp);
RcppExport SEXP _GCSM_gcsm_sw(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP ksizeSEXP, SEXP globeSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type ksize(ksizeSEXP);
    Rcpp::traits::input_parameter< bool >::type globe(globeSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(gcsm_sw(x, y, rescale, xmin, xmax, ymin, ymax, ksize, globe, comp));
    return rcpp_result_gen;
END_RCPP
}
// gcsm_tw
arma::mat gcsm_tw(arma::cube xxx, arma::cube yyy, bool rescale, double xmin, double xmax, double ymin, double ymax, std::string comp);
RcppExport SEXP _GCSM_gcsm_tw(SEXP xxxSEXP, SEXP yyySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::cube >::type xxx(xxxSEXP);
    Rcpp::traits::input_parameter< arma::cube >::type yyy(yyySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(gcsm_tw(xxx, yyy, rescale, xmin, xmax, ymin, ymax, comp));
    return rcpp_result_gen;
END_RCPP
}
// ssim_sw
arma::mat ssim_sw(arma::mat x, arma::mat y, bool rescale, double xmin, double xmax, double ymin, double ymax, double ksize, double sigma, bool globe, std::string comp);
RcppExport SEXP _GCSM_ssim_sw(SEXP xSEXP, SEXP ySEXP, SEXP rescaleSEXP, SEXP xminSEXP, SEXP xmaxSEXP, SEXP yminSEXP, SEXP ymaxSEXP, SEXP ksizeSEXP, SEXP sigmaSEXP, SEXP globeSEXP, SEXP compSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type rescale(rescaleSEXP);
    Rcpp::traits::input_parameter< double >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< double >::type xmax(xmaxSEXP);
    Rcpp::traits::input_parameter< double >::type ymin(yminSEXP);
    Rcpp::traits::input_parameter< double >::type ymax(ymaxSEXP);
    Rcpp::traits::input_parameter< double >::type ksize(ksizeSEXP);
    Rcpp::traits::input_parameter< double >::type sigma(sigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type globe(globeSEXP);
    Rcpp::traits::input_parameter< std::string >::type comp(compSEXP);
    rcpp_result_gen = Rcpp::wrap(ssim_sw(x, y, rescale, xmin, xmax, ymin, ymax, ksize, sigma, globe, comp));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GCSM_cmsc", (DL_FUNC) &_GCSM_cmsc, 8},
    {"_GCSM_cmsc_sw", (DL_FUNC) &_GCSM_cmsc_sw, 10},
    {"_GCSM_cmsc_tw", (DL_FUNC) &_GCSM_cmsc_tw, 8},
    {"_GCSM_cmsc_e1", (DL_FUNC) &_GCSM_cmsc_e1, 8},
    {"_GCSM_cmsc_e1_sw", (DL_FUNC) &_GCSM_cmsc_e1_sw, 10},
    {"_GCSM_cmsc_e1_tw", (DL_FUNC) &_GCSM_cmsc_e1_tw, 8},
    {"_GCSM_cmsc_e2", (DL_FUNC) &_GCSM_cmsc_e2, 8},
    {"_GCSM_cmsc_e2_sw", (DL_FUNC) &_GCSM_cmsc_e2_sw, 10},
    {"_GCSM_cmsc_e2_tw", (DL_FUNC) &_GCSM_cmsc_e2_tw, 8},
    {"_GCSM_gcsm", (DL_FUNC) &_GCSM_gcsm, 8},
    {"_GCSM_gcsm_sw", (DL_FUNC) &_GCSM_gcsm_sw, 10},
    {"_GCSM_gcsm_tw", (DL_FUNC) &_GCSM_gcsm_tw, 8},
    {"_GCSM_ssim_sw", (DL_FUNC) &_GCSM_ssim_sw, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_GCSM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}