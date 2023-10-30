/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_RIMTransfer.h"

#include "S1ap_RIMRoutingAddress.h"
#include "S1ap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_S1ap_RIMTransfer_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct S1ap_RIMTransfer, rIMInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_RIMInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rIMInformation"
		},
	{ ATF_POINTER, 2, offsetof(struct S1ap_RIMTransfer, rIMRoutingAddress),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_S1ap_RIMRoutingAddress,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rIMRoutingAddress"
		},
	{ ATF_POINTER, 1, offsetof(struct S1ap_RIMTransfer, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_S1ap_ProtocolExtensionContainer_7327P101,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_S1ap_RIMTransfer_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_S1ap_RIMTransfer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_S1ap_RIMTransfer_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rIMInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rIMRoutingAddress */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_S1ap_RIMTransfer_specs_1 = {
	sizeof(struct S1ap_RIMTransfer),
	offsetof(struct S1ap_RIMTransfer, _asn_ctx),
	asn_MAP_S1ap_RIMTransfer_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_S1ap_RIMTransfer_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_S1ap_RIMTransfer = {
	"RIMTransfer",
	"RIMTransfer",
	&asn_OP_SEQUENCE,
	asn_DEF_S1ap_RIMTransfer_tags_1,
	sizeof(asn_DEF_S1ap_RIMTransfer_tags_1)
		/sizeof(asn_DEF_S1ap_RIMTransfer_tags_1[0]), /* 1 */
	asn_DEF_S1ap_RIMTransfer_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_RIMTransfer_tags_1)
		/sizeof(asn_DEF_S1ap_RIMTransfer_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1ap_RIMTransfer_1,
	3,	/* Elements count */
	&asn_SPC_S1ap_RIMTransfer_specs_1	/* Additional specs */
};

