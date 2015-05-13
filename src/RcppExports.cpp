// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fast_Vector_Order
RcppExport SEXP fast_Vector_Order(SEXP x, SEXP n);
RcppExport SEXP cbr_fast_Vector_Order(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP >::type n(nSEXP);
    __result = Rcpp::wrap(fast_Vector_Order(x, n));
    return __result;
END_RCPP
}
// get_Distance_Matrix
RcppExport SEXP get_Distance_Matrix(SEXP newData, SEXP refData, SEXP weights);
RcppExport SEXP cbr_get_Distance_Matrix(SEXP newDataSEXP, SEXP refDataSEXP, SEXP weightsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type newData(newDataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type refData(refDataSEXP);
    Rcpp::traits::input_parameter< SEXP >::type weights(weightsSEXP);
    __result = Rcpp::wrap(get_Distance_Matrix(newData, refData, weights));
    return __result;
END_RCPP
}
// get_nearest_Elements
Rcpp::List get_nearest_Elements(arma::mat mNew, arma::mat mRef, arma::vec vWeights, int nCases);
RcppExport SEXP cbr_get_nearest_Elements(SEXP mNewSEXP, SEXP mRefSEXP, SEXP vWeightsSEXP, SEXP nCasesSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::mat >::type mNew(mNewSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type mRef(mRefSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type vWeights(vWeightsSEXP);
    Rcpp::traits::input_parameter< int >::type nCases(nCasesSEXP);
    __result = Rcpp::wrap(get_nearest_Elements(mNew, mRef, vWeights, nCases));
    return __result;
END_RCPP
}