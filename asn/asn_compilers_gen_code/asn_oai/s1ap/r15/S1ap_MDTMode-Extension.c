/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_MDTMode-Extension.h"

/*
 * This type is implemented using S1ap_ProtocolIE_SingleContainer_7279P15,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_S1ap_MDTMode_Extension_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1ap_MDTMode_Extension = {
	"MDTMode-Extension",
	"MDTMode-Extension",
	&asn_OP_SEQUENCE,
	asn_DEF_S1ap_MDTMode_Extension_tags_1,
	sizeof(asn_DEF_S1ap_MDTMode_Extension_tags_1)
		/sizeof(asn_DEF_S1ap_MDTMode_Extension_tags_1[0]), /* 1 */
	asn_DEF_S1ap_MDTMode_Extension_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_MDTMode_Extension_tags_1)
		/sizeof(asn_DEF_S1ap_MDTMode_Extension_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_S1ap_MDTMode_ExtensionIE_61,
	3,	/* Elements count */
	&asn_SPC_S1ap_MDTMode_ExtensionIE_specs_61	/* Additional specs */
};

