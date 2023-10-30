/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_RecommendedENBList.h"

#include "S1ap_ProtocolIE-SingleContainer.h"
static asn_oer_constraints_t asn_OER_type_S1ap_RecommendedENBList_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1	/* (SIZE(1..16)) */};
asn_per_constraints_t asn_PER_type_S1ap_RecommendedENBList_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_S1ap_RecommendedENBList_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_S1ap_ProtocolIE_SingleContainer_7279P17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_S1ap_RecommendedENBList_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_SET_OF_specifics_t asn_SPC_S1ap_RecommendedENBList_specs_1 = {
	sizeof(struct S1ap_RecommendedENBList),
	offsetof(struct S1ap_RecommendedENBList, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_RecommendedENBList = {
	"RecommendedENBList",
	"RecommendedENBList",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_S1ap_RecommendedENBList_tags_1,
	sizeof(asn_DEF_S1ap_RecommendedENBList_tags_1)
		/sizeof(asn_DEF_S1ap_RecommendedENBList_tags_1[0]), /* 1 */
	asn_DEF_S1ap_RecommendedENBList_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_RecommendedENBList_tags_1)
		/sizeof(asn_DEF_S1ap_RecommendedENBList_tags_1[0]), /* 1 */
	{ &asn_OER_type_S1ap_RecommendedENBList_constr_1, &asn_PER_type_S1ap_RecommendedENBList_constr_1, SEQUENCE_OF_constraint },
	asn_MBR_S1ap_RecommendedENBList_1,
	1,	/* Single element */
	&asn_SPC_S1ap_RecommendedENBList_specs_1	/* Additional specs */
};

