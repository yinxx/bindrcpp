// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppActiveBinding.h"
#include "../inst/include/RcppActiveBinding_types.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// create_env
SEXP create_env(CharacterVector names, XPtr<GETTER_FUNC> fun, XPtr<PAYLOAD> payload, Environment enclos);
static SEXP RcppActiveBinding_create_env_try(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< XPtr<GETTER_FUNC> >::type fun(funSEXP);
    Rcpp::traits::input_parameter< XPtr<PAYLOAD> >::type payload(payloadSEXP);
    Rcpp::traits::input_parameter< Environment >::type enclos(enclosSEXP);
    rcpp_result_gen = Rcpp::wrap(create_env(names, fun, payload, enclos));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppActiveBinding_create_env(SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP, SEXP enclosSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(RcppActiveBinding_create_env_try(namesSEXP, funSEXP, payloadSEXP, enclosSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// populate_env
SEXP populate_env(Environment env, CharacterVector names, XPtr<GETTER_FUNC> fun, XPtr<PAYLOAD> payload);
static SEXP RcppActiveBinding_populate_env_try(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Environment >::type env(envSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< XPtr<GETTER_FUNC> >::type fun(funSEXP);
    Rcpp::traits::input_parameter< XPtr<PAYLOAD> >::type payload(payloadSEXP);
    rcpp_result_gen = Rcpp::wrap(populate_env(env, names, fun, payload));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP RcppActiveBinding_populate_env(SEXP envSEXP, SEXP namesSEXP, SEXP funSEXP, SEXP payloadSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(RcppActiveBinding_populate_env_try(envSEXP, namesSEXP, funSEXP, payloadSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// init_logging
void init_logging(const std::string& log_level);
RcppExport SEXP RcppActiveBinding_init_logging(SEXP log_levelSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type log_level(log_levelSEXP);
    init_logging(log_level);
    return R_NilValue;
END_RCPP
}
// callback
SEXP callback(Symbol name, XPtr<GETTER_FUNC> xfun, XPtr<PAYLOAD> xpayload);
RcppExport SEXP RcppActiveBinding_callback(SEXP nameSEXP, SEXP xfunSEXP, SEXP xpayloadSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< Symbol >::type name(nameSEXP);
    Rcpp::traits::input_parameter< XPtr<GETTER_FUNC> >::type xfun(xfunSEXP);
    Rcpp::traits::input_parameter< XPtr<PAYLOAD> >::type xpayload(xpayloadSEXP);
    rcpp_result_gen = Rcpp::wrap(callback(name, xfun, xpayload));
    return rcpp_result_gen;
END_RCPP
}
// do_test_create_environment
SEXP do_test_create_environment(CharacterVector names, String xform, Environment parent);
RcppExport SEXP RcppActiveBinding_do_test_create_environment(SEXP namesSEXP, SEXP xformSEXP, SEXP parentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type names(namesSEXP);
    Rcpp::traits::input_parameter< String >::type xform(xformSEXP);
    Rcpp::traits::input_parameter< Environment >::type parent(parentSEXP);
    rcpp_result_gen = Rcpp::wrap(do_test_create_environment(names, xform, parent));
    return rcpp_result_gen;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int RcppActiveBinding_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("SEXP(*create_env)(CharacterVector,XPtr<GETTER_FUNC>,XPtr<PAYLOAD>,Environment)");
        signatures.insert("SEXP(*populate_env)(Environment,CharacterVector,XPtr<GETTER_FUNC>,XPtr<PAYLOAD>)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP RcppActiveBinding_RcppExport_registerCCallable() { 
    R_RegisterCCallable("RcppActiveBinding", "RcppActiveBinding_create_env", (DL_FUNC)RcppActiveBinding_create_env_try);
    R_RegisterCCallable("RcppActiveBinding", "RcppActiveBinding_populate_env", (DL_FUNC)RcppActiveBinding_populate_env_try);
    R_RegisterCCallable("RcppActiveBinding", "RcppActiveBinding_RcppExport_validate", (DL_FUNC)RcppActiveBinding_RcppExport_validate);
    return R_NilValue;
}
