/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_UserLocationInformation.h"

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_UserLocationInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Ngap_UserLocationInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  2 }	/* (0..2,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_Ngap_UserLocationInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UserLocationInformation, choice.userLocationInformationEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_UserLocationInformationEUTRA,
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
		"userLocationInformationEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UserLocationInformation, choice.userLocationInformationN3IWF),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_UserLocationInformationN3IWF,
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
		"userLocationInformationN3IWF"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_UserLocationInformation, choice.userLocationInformationNR),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_UserLocationInformationNR,
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
		"userLocationInformationNR"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_UserLocationInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* userLocationInformationEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* userLocationInformationN3IWF */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* userLocationInformationNR */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_UserLocationInformation_specs_1 = {
	sizeof(struct Ngap_UserLocationInformation),
	offsetof(struct Ngap_UserLocationInformation, _asn_ctx),
	offsetof(struct Ngap_UserLocationInformation, present),
	sizeof(((struct Ngap_UserLocationInformation *)0)->present),
	asn_MAP_Ngap_UserLocationInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0,
	3	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_UserLocationInformation = {
	"UserLocationInformation",
	"UserLocationInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Ngap_UserLocationInformation_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Ngap_UserLocationInformation_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		CHOICE_constraint
	},
	asn_MBR_Ngap_UserLocationInformation_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_UserLocationInformation_specs_1	/* Additional specs */
};

