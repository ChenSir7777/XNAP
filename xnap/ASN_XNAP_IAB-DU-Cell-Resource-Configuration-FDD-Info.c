/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_IAB-DU-Cell-Resource-Configuration-FDD-Info.h"

#include "ASN_XNAP_NRFrequencyInfo.h"
#include "ASN_XNAP_NRTransmissionBandwidth.h"
#include "ASN_XNAP_NRCarrierList.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, gNB_DU_Cell_Resource_Configuration_FDD_UL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_GNB_DU_Cell_Resource_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-DU-Cell-Resource-Configuration-FDD-UL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, gNB_DU_Cell_Resource_Configuration_FDD_DL),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_GNB_DU_Cell_Resource_Configuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gNB-DU-Cell-Resource-Configuration-FDD-DL"
		},
	{ ATF_POINTER, 7, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, uLFrequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRFrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLFrequencyInfo"
		},
	{ ATF_POINTER, 6, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, dLFrequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRFrequencyInfo,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dLFrequencyInfo"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, uLTransmissionBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRTransmissionBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLTransmissionBandwidth"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, dlTransmissionBandwidth),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRTransmissionBandwidth,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dlTransmissionBandwidth"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, uLCarrierList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRCarrierList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uLCarrierList"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, dlCarrierList),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_NRCarrierList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"dlCarrierList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P124,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_oms_1[] = { 2, 3, 4, 5, 6, 7, 8 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* gNB-DU-Cell-Resource-Configuration-FDD-UL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* gNB-DU-Cell-Resource-Configuration-FDD-DL */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uLFrequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dLFrequencyInfo */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* uLTransmissionBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* dlTransmissionBandwidth */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* uLCarrierList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* dlCarrierList */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_specs_1 = {
	sizeof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info),
	offsetof(struct ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info, _asn_ctx),
	asn_MAP_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_oms_1,	/* Optional members */
	7, 0,	/* Root/Additions */
	9,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info = {
	"IAB-DU-Cell-Resource-Configuration-FDD-Info",
	"IAB-DU-Cell-Resource-Configuration-FDD-Info",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1,
	sizeof(asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_1,
	9,	/* Elements count */
	&asn_SPC_ASN_XNAP_IAB_DU_Cell_Resource_Configuration_FDD_Info_specs_1	/* Additional specs */
};
