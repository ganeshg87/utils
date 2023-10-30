/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_SONInformation.h"

static asn_oer_constraints_t asn_OER_type_S1ap_SONInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_S1ap_SONInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1ap_SONInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SONInformation, choice.sONInformationRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_SONInformationRequest,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sONInformationRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_SONInformation, choice.sONInformationReply),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_SONInformationReply,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sONInformationReply"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_SONInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sONInformationRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sONInformationReply */
};
asn_CHOICE_specifics_t asn_SPC_S1ap_SONInformation_specs_1 = {
	sizeof(struct S1ap_SONInformation),
	offsetof(struct S1ap_SONInformation, _asn_ctx),
	offsetof(struct S1ap_SONInformation, present),
	sizeof(((struct S1ap_SONInformation *)0)->present),
	asn_MAP_S1ap_SONInformation_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_SONInformation = {
	"SONInformation",
	"SONInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_S1ap_SONInformation_constr_1, &asn_PER_type_S1ap_SONInformation_constr_1, CHOICE_constraint },
	asn_MBR_S1ap_SONInformation_1,
	2,	/* Elements count */
	&asn_SPC_S1ap_SONInformation_specs_1	/* Additional specs */
};

