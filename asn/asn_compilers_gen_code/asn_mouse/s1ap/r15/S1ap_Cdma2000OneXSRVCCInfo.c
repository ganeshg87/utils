/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_Cdma2000OneXSRVCCInfo.h"

#include "S1ap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1ap_Cdma2000OneXSRVCCInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cdma2000OneXSRVCCInfo, cdma2000OneXMEID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_Cdma2000OneXMEID,
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
		"cdma2000OneXMEID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cdma2000OneXSRVCCInfo, cdma2000OneXMSI),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_Cdma2000OneXMSI,
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
		"cdma2000OneXMSI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_Cdma2000OneXSRVCCInfo, cdma2000OneXPilot),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_Cdma2000OneXPilot,
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
		"cdma2000OneXPilot"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_Cdma2000OneXSRVCCInfo, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ProtocolExtensionContainer_7327P34,
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
static const int asn_MAP_S1ap_Cdma2000OneXSRVCCInfo_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_Cdma2000OneXSRVCCInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cdma2000OneXMEID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cdma2000OneXMSI */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* cdma2000OneXPilot */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1ap_Cdma2000OneXSRVCCInfo_specs_1 = {
	sizeof(struct S1ap_Cdma2000OneXSRVCCInfo),
	offsetof(struct S1ap_Cdma2000OneXSRVCCInfo, _asn_ctx),
	asn_MAP_S1ap_Cdma2000OneXSRVCCInfo_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_S1ap_Cdma2000OneXSRVCCInfo_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_Cdma2000OneXSRVCCInfo = {
	"Cdma2000OneXSRVCCInfo",
	"Cdma2000OneXSRVCCInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1,
	sizeof(asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1)
		/sizeof(asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1[0]), /* 1 */
	asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1)
		/sizeof(asn_DEF_S1ap_Cdma2000OneXSRVCCInfo_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1ap_Cdma2000OneXSRVCCInfo_1,
	4,	/* Elements count */
	&asn_SPC_S1ap_Cdma2000OneXSRVCCInfo_specs_1	/* Additional specs */
};

