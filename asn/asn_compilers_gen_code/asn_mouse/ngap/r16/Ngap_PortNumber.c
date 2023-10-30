/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#include "Ngap_PortNumber.h"

int
Ngap_PortNumber_constraint(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size == 2UL)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

/*
 * This type is implemented using OCTET_STRING,
 * so here we adjust the DEF accordingly.
 */
#if !defined(ASN_DISABLE_OER_SUPPORT)
static asn_oer_constraints_t asn_OER_type_Ngap_PortNumber_constr_1 CC_NOTUSED = {
	{ 0, 0 },
	2	/* (SIZE(2..2)) */};
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
asn_per_constraints_t asn_PER_type_Ngap_PortNumber_constr_1 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 0,  0,  2,  2 }	/* (SIZE(2..2)) */,
	0, 0	/* No PER value map */
};
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
static const ber_tlv_tag_t asn_DEF_Ngap_PortNumber_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (4 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Ngap_PortNumber = {
	"PortNumber",
	"PortNumber",
	&asn_OP_OCTET_STRING,
	asn_DEF_Ngap_PortNumber_tags_1,
	sizeof(asn_DEF_Ngap_PortNumber_tags_1)
		/sizeof(asn_DEF_Ngap_PortNumber_tags_1[0]), /* 1 */
	asn_DEF_Ngap_PortNumber_tags_1,	/* Same as above */
	sizeof(asn_DEF_Ngap_PortNumber_tags_1)
		/sizeof(asn_DEF_Ngap_PortNumber_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		&asn_OER_type_Ngap_PortNumber_constr_1,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		&asn_PER_type_Ngap_PortNumber_constr_1,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		Ngap_PortNumber_constraint
	},
	0, 0,	/* No members */
	&asn_SPC_OCTET_STRING_specs	/* Additional specs */
};

