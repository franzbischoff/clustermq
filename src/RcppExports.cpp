// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// zmq_context
SEXP zmq_context(int threads);
RcppExport SEXP _clustermq_zmq_context(SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(zmq_context(threads));
    return rcpp_result_gen;
END_RCPP
}
// ctx_close
void ctx_close(SEXP ctx_);
RcppExport SEXP _clustermq_ctx_close(SEXP ctx_SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type ctx_(ctx_SEXP);
    ctx_close(ctx_);
    return R_NilValue;
END_RCPP
}
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
    {"_clustermq_zmq_context", (DL_FUNC) &_clustermq_zmq_context, 1},
    {"_clustermq_ctx_close", (DL_FUNC) &_clustermq_ctx_close, 1},
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
