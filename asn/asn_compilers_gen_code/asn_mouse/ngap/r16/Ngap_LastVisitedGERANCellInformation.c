/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_LastVisitedGERANCellInformation.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_LastVisitedGERANCellInformation = {
	"LastVisitedGERANCellInformation",
	"LastVisitedGERANCellInformation",
	&asn_OP_OCTET_STRING,
	asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1,
	sizeof(asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1)
		/sizeof(asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1[0]), /* 1 */
	asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1)
		/sizeof(asn_DEF_Ngap_LastVisitedGERANCellInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		OCTET_STRING_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

