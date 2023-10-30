/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_CellActivationRequest.h"

static int
memb_S1ap_minimumActivationTime_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1L && value <= 60L)) {
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
static asn_oer_constraints_t asn_OER_memb_S1ap_minimumActivationTime_constr_3 CC_NOTUSED = {
	{ 1, 1 }	/* (1..60) */,
	-1};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
static asn_per_constraints_t asn_PER_memb_S1ap_minimumActivationTime_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  1,  60 }	/* (1..60) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
asn_TYPE_member_t asn_MBR_S1ap_CellActivationRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_CellActivationRequest, cellsToActivateList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_CellsToActivateList,
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
		"cellsToActivateList"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_CellActivationRequest, minimumActivationTime),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			&asn_OER_memb_S1ap_minimumActivationTime_constr_3,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			&asn_PER_memb_S1ap_minimumActivationTime_constr_3,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			memb_S1ap_minimumActivationTime_constraint_1
		},
		0, 0, /* No default value */
		"minimumActivationTime"
		},
};
static const int asn_MAP_S1ap_CellActivationRequest_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_S1ap_CellActivationRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_CellActivationRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cellsToActivateList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* minimumActivationTime */
};
asn_SEQUENCE_specifics_t asn_SPC_S1ap_CellActivationRequest_specs_1 = {
	sizeof(struct S1ap_CellActivationRequest),
	offsetof(struct S1ap_CellActivationRequest, _asn_ctx),
	asn_MAP_S1ap_CellActivationRequest_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_S1ap_CellActivationRequest_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_CellActivationRequest = {
	"CellActivationRequest",
	"CellActivationRequest",
	&asn_OP_SEQUENCE,
	asn_DEF_S1ap_CellActivationRequest_tags_1,
	sizeof(asn_DEF_S1ap_CellActivationRequest_tags_1)
		/sizeof(asn_DEF_S1ap_CellActivationRequest_tags_1[0]), /* 1 */
	asn_DEF_S1ap_CellActivationRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_CellActivationRequest_tags_1)
		/sizeof(asn_DEF_S1ap_CellActivationRequest_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_S1ap_CellActivationRequest_1,
	2,	/* Elements count */
	&asn_SPC_S1ap_CellActivationRequest_specs_1	/* Additional specs */
};
