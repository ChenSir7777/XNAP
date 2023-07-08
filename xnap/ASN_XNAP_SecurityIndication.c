/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_SecurityIndication.h"

#include "ASN_XNAP_MaximumIPdatarate.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_integrityProtectionIndication_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_integrityProtectionIndication_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_oer_constraints_t asn_OER_type_ASN_XNAP_confidentialityProtectionIndication_constr_7 CC_NOTUSED = {
	{ 0, 0 },
	-1};
static asn_per_constraints_t asn_PER_type_ASN_XNAP_confidentialityProtectionIndication_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_integrityProtectionIndication_value2enum_2[] = {
	{ 0,	8,	"required" },
	{ 1,	9,	"preferred" },
	{ 2,	10,	"not-needed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_integrityProtectionIndication_enum2value_2[] = {
	2,	/* not-needed(2) */
	1,	/* preferred(1) */
	0	/* required(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_integrityProtectionIndication_specs_2 = {
	asn_MAP_ASN_XNAP_integrityProtectionIndication_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_integrityProtectionIndication_enum2value_2,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_integrityProtectionIndication_2 = {
	"integrityProtectionIndication",
	"integrityProtectionIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2,
	sizeof(asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2)
		/sizeof(asn_DEF_ASN_XNAP_integrityProtectionIndication_tags_2[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_integrityProtectionIndication_constr_2, &asn_PER_type_ASN_XNAP_integrityProtectionIndication_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_integrityProtectionIndication_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_ASN_XNAP_confidentialityProtectionIndication_value2enum_7[] = {
	{ 0,	8,	"required" },
	{ 1,	9,	"preferred" },
	{ 2,	10,	"not-needed" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_ASN_XNAP_confidentialityProtectionIndication_enum2value_7[] = {
	2,	/* not-needed(2) */
	1,	/* preferred(1) */
	0	/* required(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_ASN_XNAP_confidentialityProtectionIndication_specs_7 = {
	asn_MAP_ASN_XNAP_confidentialityProtectionIndication_value2enum_7,	/* "tag" => N; sorted by tag */
	asn_MAP_ASN_XNAP_confidentialityProtectionIndication_enum2value_7,	/* N => "tag"; sorted by N */
	3,	/* Number of elements in the maps */
	4,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_confidentialityProtectionIndication_7 = {
	"confidentialityProtectionIndication",
	"confidentialityProtectionIndication",
	&asn_OP_NativeEnumerated,
	asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7,
	sizeof(asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7)
		/sizeof(asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7[0]) - 1, /* 1 */
	asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7)
		/sizeof(asn_DEF_ASN_XNAP_confidentialityProtectionIndication_tags_7[0]), /* 2 */
	{ &asn_OER_type_ASN_XNAP_confidentialityProtectionIndication_constr_7, &asn_PER_type_ASN_XNAP_confidentialityProtectionIndication_constr_7, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_ASN_XNAP_confidentialityProtectionIndication_specs_7	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_ASN_XNAP_SecurityIndication_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_SecurityIndication, integrityProtectionIndication),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_integrityProtectionIndication_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"integrityProtectionIndication"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_SecurityIndication, confidentialityProtectionIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_confidentialityProtectionIndication_7,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"confidentialityProtectionIndication"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_SecurityIndication, maximumIPdatarate),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_MaximumIPdatarate,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"maximumIPdatarate"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_SecurityIndication, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P316,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_SecurityIndication_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_SecurityIndication_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_SecurityIndication_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* integrityProtectionIndication */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* confidentialityProtectionIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* maximumIPdatarate */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_SecurityIndication_specs_1 = {
	sizeof(struct ASN_XNAP_SecurityIndication),
	offsetof(struct ASN_XNAP_SecurityIndication, _asn_ctx),
	asn_MAP_ASN_XNAP_SecurityIndication_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_SecurityIndication_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_SecurityIndication = {
	"SecurityIndication",
	"SecurityIndication",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_SecurityIndication_tags_1,
	sizeof(asn_DEF_ASN_XNAP_SecurityIndication_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_SecurityIndication_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_SecurityIndication_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_SecurityIndication_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_SecurityIndication_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_SecurityIndication_1,
	4,	/* Elements count */
	&asn_SPC_ASN_XNAP_SecurityIndication_specs_1	/* Additional specs */
};
