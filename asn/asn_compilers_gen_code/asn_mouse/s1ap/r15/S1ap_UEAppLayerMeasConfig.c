/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_UEAppLayerMeasConfig.h"

#include "S1ap_ProtocolExtensionContainer.h"
static int
memb_S1ap_containerForAppLayerMeasConfig_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 1UL && size <= 1000UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_memb_S1ap_containerForAppLayerMeasConfig_constr_2 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..1000)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_S1ap_containerForAppLayerMeasConfig_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 10,  10,  1,  1000 }	/* (SIZE(1..1000)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_S1ap_UEAppLayerMeasConfig_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UEAppLayerMeasConfig, containerForAppLayerMeasConfig),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_S1ap_containerForAppLayerMeasConfig_constr_2,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_S1ap_containerForAppLayerMeasConfig_constr_2,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_S1ap_containerForAppLayerMeasConfig_constraint_1
		},
		0, 0, /* No default value */
		"containerForAppLayerMeasConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_UEAppLayerMeasConfig, areaScopeOfQMC),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1ap_AreaScopeOfQMC,
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
		"areaScopeOfQMC"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_UEAppLayerMeasConfig, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ProtocolExtensionContainer_7327P135,
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
static const int asn_MAP_S1ap_UEAppLayerMeasConfig_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_UEAppLayerMeasConfig_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* containerForAppLayerMeasConfig */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* areaScopeOfQMC */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1ap_UEAppLayerMeasConfig_specs_1 = {
	sizeof(struct S1ap_UEAppLayerMeasConfig),
	offsetof(struct S1ap_UEAppLayerMeasConfig, _asn_ctx),
	asn_MAP_S1ap_UEAppLayerMeasConfig_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_UEAppLayerMeasConfig_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_UEAppLayerMeasConfig = {
	"UEAppLayerMeasConfig",
	"UEAppLayerMeasConfig",
	&asn_OP_SEQUENCE,
	asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1,
	sizeof(asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1)
		/sizeof(asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1[0]), /* 1 */
	asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1)
		/sizeof(asn_DEF_S1ap_UEAppLayerMeasConfig_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1ap_UEAppLayerMeasConfig_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_UEAppLayerMeasConfig_specs_1	/* Additional specs */
};

