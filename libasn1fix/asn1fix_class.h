#ifndef	_ASN1FIX_CLASS_H_
#define	_ASN1FIX_CLASS_H_

/*
 * Fetch the element from the class-related stuff (thing) by its reference.
 */
asn1p_expr_t *asn1f_class_access(arg_t *, asn1p_module_t *mod, asn1p_ref_t *);

/*
 * Externally accessible version of above function.
 */
asn1p_expr_t *asn1f_class_access2(asn1p_t *asn, asn1p_module_t *mod,
	asn1p_expr_t *expr, asn1p_ref_t *);

/*
 * CLASS may contain the "WITH SYNTAX" clause, in which case we are
 * going to parse it.
 */
int asn1f_parse_class_with_syntax(arg_t *arg);

#endif	/* _ASN1FIX_CLASS_H_ */
