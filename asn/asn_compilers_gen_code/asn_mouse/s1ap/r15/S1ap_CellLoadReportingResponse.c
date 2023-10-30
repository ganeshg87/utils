/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_CellLoadReportingResponse.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_S1ap_CellLoadReportingResponse_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_S1ap_CellLoadReportingResponse_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_S1ap_CellLoadReportingResponse_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_CellLoadReportingResponse, choice.eUTRAN),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_EUTRANcellLoadReportingResponse,
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
		"eUTRAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_CellLoadReportingResponse, choice.uTRAN),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"uTRAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_CellLoadReportingResponse, choice.gERAN),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
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
		"gERAN"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_CellLoadReportingResponse, choice.eHRPD),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_EHRPDSectorLoadReportingResponse,
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
		"eHRPD"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_CellLoadReportingResponse_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eUTRAN */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* uTRAN */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* gERAN */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* eHRPD */
};
asn_CHOICE_specifics_t asn_SPC_S1ap_CellLoadReportingResponse_specs_1 = {
	sizeof(struct S1ap_CellLoadReportingResponse),
	offsetof(struct S1ap_CellLoadReportingResponse, _asn_ctx),
	offsetof(struct S1ap_CellLoadReportingResponse, present),
	sizeof(((struct S1ap_CellLoadReportingResponse *)0)->present),
	asn_MAP_S1ap_CellLoadReportingResponse_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_CellLoadReportingResponse = {
	"CellLoadReportingResponse",
	"CellLoadReportingResponse",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_S1ap_CellLoadReportingResponse_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_S1ap_CellLoadReportingResponse_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_S1ap_CellLoadReportingResponse_1,
	4,	/* Elements count */
	&asn_SPC_S1ap_CellLoadReportingResponse_specs_1	/* Additional specs */
};
