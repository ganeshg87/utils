/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-Containers"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_ProtocolIE-SingleContainer.h"

/*
 * This type is implemented using Ngap_CPTransportLayerInformation_ExtIEs,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0 = {
	"ProtocolIE-SingleContainer",
	"ProtocolIE-SingleContainer",
	&asn_OP_SEQUENCE,
	asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1,
	sizeof(asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1)
		/sizeof(asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1[0]), /* 1 */
	asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1)
		/sizeof(asn_DEF_Ngap_ProtocolIE_SingleContainer_6935P0_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_Ngap_CPTransportLayerInformation_ExtIEs_1,
	3,	/* Elements count */
	&asn_SPC_Ngap_CPTransportLayerInformation_ExtIEs_specs_1	/* Additional specs */
};
