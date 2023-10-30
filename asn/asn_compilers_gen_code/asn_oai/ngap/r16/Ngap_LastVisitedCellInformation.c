/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_LastVisitedCellInformation.h"

static asn_oer_constraints_t asn_OER_type_Ngap_LastVisitedCellInformation_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	-1};
asn_per_constraints_t asn_PER_type_Ngap_LastVisitedCellInformation_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_Ngap_LastVisitedCellInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_LastVisitedCellInformation, choice.nGRANCell),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_LastVisitedNGRANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nGRANCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_LastVisitedCellInformation, choice.eUTRANCell),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_LastVisitedEUTRANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eUTRANCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_LastVisitedCellInformation, choice.uTRANCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_LastVisitedUTRANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uTRANCell"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct Ngap_LastVisitedCellInformation, choice.gERANCell),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_Ngap_LastVisitedGERANCellInformation,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"gERANCell"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_Ngap_LastVisitedCellInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* nGRANCell */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eUTRANCell */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* uTRANCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* gERANCell */
};
asn_CHOICE_specifics_t asn_SPC_Ngap_LastVisitedCellInformation_specs_1 = {
	sizeof(struct Ngap_LastVisitedCellInformation),
	offsetof(struct Ngap_LastVisitedCellInformation, _asn_ctx),
	offsetof(struct Ngap_LastVisitedCellInformation, present),
	sizeof(((struct Ngap_LastVisitedCellInformation *)0)->present),
	asn_MAP_Ngap_LastVisitedCellInformation_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0,
	4	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_Ngap_LastVisitedCellInformation = {
	"LastVisitedCellInformation",
	"LastVisitedCellInformation",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ &asn_OER_type_Ngap_LastVisitedCellInformation_constr_1, &asn_PER_type_Ngap_LastVisitedCellInformation_constr_1, CHOICE_constraint },
	asn_MBR_Ngap_LastVisitedCellInformation_1,
	4,	/* Elements count */
	&asn_SPC_Ngap_LastVisitedCellInformation_specs_1	/* Additional specs */
};

