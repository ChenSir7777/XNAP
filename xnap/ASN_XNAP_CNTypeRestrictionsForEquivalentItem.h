/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_CNTypeRestrictionsForEquivalentItem_H_
#define	_ASN_XNAP_CNTypeRestrictionsForEquivalentItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ASN_XNAP_PLMN-Identity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_CNTypeRestrictionsForEquivalentItem__cn_Type {
	ASN_XNAP_CNTypeRestrictionsForEquivalentItem__cn_Type_epc_forbidden	= 0,
	ASN_XNAP_CNTypeRestrictionsForEquivalentItem__cn_Type_fiveGC_forbidden	= 1
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_CNTypeRestrictionsForEquivalentItem__cn_Type;

/* Forward declarations */
struct ASN_XNAP_ProtocolExtensionContainer;

/* ASN_XNAP_CNTypeRestrictionsForEquivalentItem */
typedef struct ASN_XNAP_CNTypeRestrictionsForEquivalentItem {
	ASN_XNAP_PLMN_Identity_t	 plmn_Identity;
	long	 cn_Type;
	struct ASN_XNAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ASN_XNAP_CNTypeRestrictionsForEquivalentItem_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_cn_Type_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_CNTypeRestrictionsForEquivalentItem;
extern asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_CNTypeRestrictionsForEquivalentItem_specs_1;
extern asn_TYPE_member_t asn_MBR_ASN_XNAP_CNTypeRestrictionsForEquivalentItem_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_CNTypeRestrictionsForEquivalentItem_H_ */
#include <asn_internal.h>