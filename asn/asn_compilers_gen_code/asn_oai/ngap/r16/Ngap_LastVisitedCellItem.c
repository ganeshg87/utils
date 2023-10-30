/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_LastVisitedCellItem.h"

#include "Ngap_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_Ngap_LastVisitedCellItem_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_LastVisitedCellItem, lastVisitedCellInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Ngap_LastVisitedCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lastVisitedCellInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct Ngap_LastVisitedCellItem, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_ProtocolExtensionContainer_6983P71,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_Ngap_LastVisitedCellItem_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Ngap_LastVisitedCellItem_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_LastVisitedCellItem_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* lastVisitedCellInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_Ngap_LastVisitedCellItem_specs_1 = {
	sizeof(struct Ngap_LastVisitedCellItem),
	offsetof(struct Ngap_LastVisitedCellItem, _asn_ctx),
	asn_MAP_Ngap_LastVisitedCellItem_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_Ngap_LastVisitedCellItem_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_LastVisitedCellItem = {
	"LastVisitedCellItem",
	"LastVisitedCellItem",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_LastVisitedCellItem_tags_1,
	sizeof(asn_DEF_Ngap_LastVisitedCellItem_tags_1)
		/sizeof(asn_DEF_Ngap_LastVisitedCellItem_tags_1[0]), /* 1 */
	asn_DEF_Ngap_LastVisitedCellItem_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_LastVisitedCellItem_tags_1)
		/sizeof(asn_DEF_Ngap_LastVisitedCellItem_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_Ngap_LastVisitedCellItem_1,
	2,	/* Elements count */
	&asn_SPC_Ngap_LastVisitedCellItem_specs_1	/* Additional specs */
};

