/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#include "S1ap_Target-ToSource-TransparentContainer.h"

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_S1ap_Target_ToSource_TransparentContainer = {
	"Target-ToSource-TransparentContainer",
	"Target-ToSource-TransparentContainer",
	&asn_OP_OCTET_STRING,
	asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1,
	sizeof(asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1)
		/sizeof(asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1[0]), /* 1 */
	asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1,	/* Same as above */
	sizeof(asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1)
		/sizeof(asn_DEF_S1ap_Target_ToSource_TransparentContainer_tags_1[0]), /* 1 */
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

