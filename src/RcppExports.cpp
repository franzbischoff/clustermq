// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// has_connectivity
bool has_connectivity(std::string host);
RcppExport SEXP _clustermq_has_connectivity(SEXP hostSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type host(hostSEXP);
    rcpp_result_gen = Rcpp::wrap(has_connectivity(host));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_cmq_master();
RcppExport SEXP _rcpp_module_boot_cmq_proxy();
RcppExport SEXP _rcpp_module_boot_cmq_worker();

static const R_CallMethodDef CallEntries[] = {
    {"_clustermq_has_connectivity", (DL_FUNC) &_clustermq_has_connectivity, 1},
    {"_rcpp_module_boot_cmq_master", (DL_FUNC) &_rcpp_module_boot_cmq_master, 0},
    {"_rcpp_module_boot_cmq_proxy", (DL_FUNC) &_rcpp_module_boot_cmq_proxy, 0},
    {"_rcpp_module_boot_cmq_worker", (DL_FUNC) &_rcpp_module_boot_cmq_worker, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_clustermq(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
