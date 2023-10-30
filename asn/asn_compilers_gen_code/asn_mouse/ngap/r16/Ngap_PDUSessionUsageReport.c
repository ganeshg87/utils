/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_PDUSessionUsageReport.h"

#include "Ngap_ProtocolExtensionContainer.h"
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_rATType_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_type_Ngap_rATType_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const asn_INTEGER_enum_map_t asn_MAP_Ngap_rATType_value2enum_2[] = {
	{ 0,	2,	"nr" },
	{ 1,	5,	"eutra" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_Ngap_rATType_enum2value_2[] = {
	1,	/* eutra(1) */
	0	/* nr(0) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_Ngap_rATType_specs_2 = {
	asn_MAP_Ngap_rATType_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_Ngap_rATType_enum2value_2,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	3,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_Ngap_rATType_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Ngap_rATType_2 = {
	"rATType",
	"rATType",
	&asn_OP_NativeEnumerated,
	asn_DEF_Ngap_rATType_tags_2,
	sizeof(asn_DEF_Ngap_rATType_tags_2)
		/sizeof(asn_DEF_Ngap_rATType_tags_2[0]) - 1, /* 1 */
	asn_DEF_Ngap_rATType_tags_2,	/* Same as above */
	sizeof(asn_DEF_Ngap_rATType_tags_2)
		/sizeof(asn_DEF_Ngap_rATType_tags_2[0]), /* 2 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Ngap_rATType_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Ngap_rATType_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		NativeEnumerated_constraint
	},
	0, 0,	/* Defined elsewhere */
	&asn_SPC_Ngap_rATType_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_Ngap_PDUSessionUsageReport_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_PDUSessionUsageReport, rATType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_rATType_2,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"rATType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_PDUSessionUsageReport, pDUSessionTimedReportList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_VolumeTimedReportList,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"pDUSessionTimedReportList"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_PDUSessionUsageReport, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_6983P129,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_PDUSessionUsageReport_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_Ngap_PDUSessionUsageReport_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_PDUSessionUsageReport_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rATType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pDUSessionTimedReportList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_PDUSessionUsageReport_specs_1 = {
	sizeof(struct Ngap_PDUSessionUsageReport),
	offsetof(struct Ngap_PDUSessionUsageReport, _asn_ctx),
	asn_MAP_Ngap_PDUSessionUsageReport_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_Ngap_PDUSessionUsageReport_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionUsageReport = {
	"PDUSessionUsageReport",
	"PDUSessionUsageReport",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_PDUSessionUsageReport_tags_1,
	sizeof(asn_DEF_Ngap_PDUSessionUsageReport_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionUsageReport_tags_1[0]), /* 1 */
	asn_DEF_Ngap_PDUSessionUsageReport_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_PDUSessionUsageReport_tags_1)
		/sizeof(asn_DEF_Ngap_PDUSessionUsageReport_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ngap_PDUSessionUsageReport_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_PDUSessionUsageReport_specs_1	/* Additional specs */
};

