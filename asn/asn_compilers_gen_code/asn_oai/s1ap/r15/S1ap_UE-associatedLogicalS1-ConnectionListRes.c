/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_UE-associatedLogicalS1-ConnectionListRes.h"

#include "S1ap_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_S1ap_UE_associatedLogicalS1_ConnectionListRes_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..256)) */};
asn_per_constraints_t asn_PER_type_S1ap_UE_associatedLogicalS1_ConnectionListRes_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 8,  8,  1,  256 }	/* (SIZE(1..256)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1ap_UE_associatedLogicalS1_ConnectionListRes_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1ap_ProtocolIE_SingleContainer_7279P8,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1ap_UE_associatedLogicalS1_ConnectionListRes_specs_1 = {
	sizeof(struct S1ap_UE_associatedLogicalS1_ConnectionListRes),
	offsetof(struct S1ap_UE_associatedLogicalS1_ConnectionListRes, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes = {
	"UE-associatedLogicalS1-ConnectionListRes",
	"UE-associatedLogicalS1-ConnectionListRes",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1,
	sizeof(asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1)
		/sizeof(asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1[0]), /* 1 */
	asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1)
		/sizeof(asn_DEF_S1ap_UE_associatedLogicalS1_ConnectionListRes_tags_1[0]), /* 1 */
	{ &asn_OER_type_S1ap_UE_associatedLogicalS1_ConnectionListRes_constr_1, &asn_PER_type_S1ap_UE_associatedLogicalS1_ConnectionListRes_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1ap_UE_associatedLogicalS1_ConnectionListRes_1,
	1,	/* Single element */
	&asn_SPC_S1ap_UE_associatedLogicalS1_ConnectionListRes_specs_1	/* Additional specs */
};

