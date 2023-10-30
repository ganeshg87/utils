/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_LoggedMDT.h"

#include "S1ap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1ap_LoggedMDT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LoggedMDT, loggingInterval),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_LoggingInterval,
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
		"loggingInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_LoggedMDT, loggingDuration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_LoggingDuration,
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
		"loggingDuration"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_LoggedMDT, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ProtocolExtensionContainer_7327P77,
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
static const int asn_MAP_S1ap_LoggedMDT_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1ap_LoggedMDT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_LoggedMDT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* loggingInterval */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* loggingDuration */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1ap_LoggedMDT_specs_1 = {
	sizeof(struct S1ap_LoggedMDT),
	offsetof(struct S1ap_LoggedMDT, _asn_ctx),
	asn_MAP_S1ap_LoggedMDT_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_LoggedMDT_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_LoggedMDT = {
	"LoggedMDT",
	"LoggedMDT",
	&asn_OP_SEQUENCE,
	asn_DEF_S1ap_LoggedMDT_tags_1,
	sizeof(asn_DEF_S1ap_LoggedMDT_tags_1)
		/sizeof(asn_DEF_S1ap_LoggedMDT_tags_1[0]), /* 1 */
	asn_DEF_S1ap_LoggedMDT_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_LoggedMDT_tags_1)
		/sizeof(asn_DEF_S1ap_LoggedMDT_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1ap_LoggedMDT_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_LoggedMDT_specs_1	/* Additional specs */
};

