/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#ifndef	_ASN_XNAP_ExcessPacketDelayThresholdValue_H_
#define	_ASN_XNAP_ExcessPacketDelayThresholdValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ASN_XNAP_ExcessPacketDelayThresholdValue {
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms0dot25	= 0,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms0dot5	= 1,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms1	= 2,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms2	= 3,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms4	= 4,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms5	= 5,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms10	= 6,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms20	= 7,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms30	= 8,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms40	= 9,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms50	= 10,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms60	= 11,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms70	= 12,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms80	= 13,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms90	= 14,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms100	= 15,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms150	= 16,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms300	= 17,
	ASN_XNAP_ExcessPacketDelayThresholdValue_ms500	= 18
	/*
	 * Enumeration is extensible
	 */
} e_ASN_XNAP_ExcessPacketDelayThresholdValue;

/* ASN_XNAP_ExcessPacketDelayThresholdValue */
typedef long	 ASN_XNAP_ExcessPacketDelayThresholdValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ASN_XNAP_ExcessPacketDelayThresholdValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_ExcessPacketDelayThresholdValue;
extern const asn_INTEGER_specifics_t asn_SPC_ExcessPacketDelayThresholdValue_specs_1;
asn_struct_free_f ExcessPacketDelayThresholdValue_free;
asn_struct_print_f ExcessPacketDelayThresholdValue_print;
asn_constr_check_f ExcessPacketDelayThresholdValue_constraint;
ber_type_decoder_f ExcessPacketDelayThresholdValue_decode_ber;
der_type_encoder_f ExcessPacketDelayThresholdValue_encode_der;
xer_type_decoder_f ExcessPacketDelayThresholdValue_decode_xer;
xer_type_encoder_f ExcessPacketDelayThresholdValue_encode_xer;
oer_type_decoder_f ExcessPacketDelayThresholdValue_decode_oer;
oer_type_encoder_f ExcessPacketDelayThresholdValue_encode_oer;
per_type_decoder_f ExcessPacketDelayThresholdValue_decode_uper;
per_type_encoder_f ExcessPacketDelayThresholdValue_encode_uper;
per_type_decoder_f ExcessPacketDelayThresholdValue_decode_aper;
per_type_encoder_f ExcessPacketDelayThresholdValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ASN_XNAP_ExcessPacketDelayThresholdValue_H_ */
#include <asn_internal.h>