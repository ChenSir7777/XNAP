/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "XnAP-IEs"
 * 	found in "../xnap_asn.1/XnAP-IEs.asn"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice -gen-PER -D ../xnap_src`
 */

#include "ASN_XNAP_LoggedMDT-NR.h"

#include "ASN_XNAP_BluetoothMeasurementConfiguration.h"
#include "ASN_XNAP_WLANMeasurementConfiguration.h"
#include "ASN_XNAP_SensorMeasurementConfiguration.h"
#include "ASN_XNAP_AreaScopeOfNeighCellsList.h"
#include "ASN_XNAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_ASN_XNAP_LoggedMDT_NR_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_LoggedMDT_NR, loggingInterval),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_LoggingInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_LoggedMDT_NR, loggingDuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_LoggingDuration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"loggingDuration"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ASN_XNAP_LoggedMDT_NR, reportType),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ReportType,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportType"
		},
	{ ATF_POINTER, 5, offsetof(struct ASN_XNAP_LoggedMDT_NR, bluetoothMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_BluetoothMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bluetoothMeasurementConfiguration"
		},
	{ ATF_POINTER, 4, offsetof(struct ASN_XNAP_LoggedMDT_NR, wLANMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_WLANMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"wLANMeasurementConfiguration"
		},
	{ ATF_POINTER, 3, offsetof(struct ASN_XNAP_LoggedMDT_NR, sensorMeasurementConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_SensorMeasurementConfiguration,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sensorMeasurementConfiguration"
		},
	{ ATF_POINTER, 2, offsetof(struct ASN_XNAP_LoggedMDT_NR, areaScopeOfNeighCellsList),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_AreaScopeOfNeighCellsList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaScopeOfNeighCellsList"
		},
	{ ATF_POINTER, 1, offsetof(struct ASN_XNAP_LoggedMDT_NR, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ASN_XNAP_ProtocolExtensionContainer_168P146,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_ASN_XNAP_LoggedMDT_NR_oms_1[] = { 3, 4, 5, 6, 7 };
static const ber_tlv_tag_t asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ASN_XNAP_LoggedMDT_NR_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggingInterval */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggingDuration */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportType */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* bluetoothMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* wLANMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* sensorMeasurementConfiguration */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* areaScopeOfNeighCellsList */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_ASN_XNAP_LoggedMDT_NR_specs_1 = {
	sizeof(struct ASN_XNAP_LoggedMDT_NR),
	offsetof(struct ASN_XNAP_LoggedMDT_NR, _asn_ctx),
	asn_MAP_ASN_XNAP_LoggedMDT_NR_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_ASN_XNAP_LoggedMDT_NR_oms_1,	/* Optional members */
	5, 0,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_ASN_XNAP_LoggedMDT_NR = {
	"LoggedMDT-NR",
	"LoggedMDT-NR",
	&asn_OP_SEQUENCE,
	asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1,
	sizeof(asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1[0]), /* 1 */
	asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1,	/* Same as above */
	sizeof(asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1)
		/sizeof(asn_DEF_ASN_XNAP_LoggedMDT_NR_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_ASN_XNAP_LoggedMDT_NR_1,
	8,	/* Elements count */
	&asn_SPC_ASN_XNAP_LoggedMDT_NR_specs_1	/* Additional specs */
};
