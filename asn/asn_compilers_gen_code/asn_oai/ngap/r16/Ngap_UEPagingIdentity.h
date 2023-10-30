/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_UEPagingIdentity_H_
#define	_Ngap_UEPagingIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_FiveG-S-TMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_UEPagingIdentity_PR {
	Ngap_UEPagingIdentity_PR_NOTHING,	/* No components present */
	Ngap_UEPagingIdentity_PR_fiveG_S_TMSI
	/* Extensions may appear below */
	
} Ngap_UEPagingIdentity_PR;

/* Ngap_UEPagingIdentity */
typedef struct Ngap_UEPagingIdentity {
	Ngap_UEPagingIdentity_PR present;
	union Ngap_UEPagingIdentity_u {
		Ngap_FiveG_S_TMSI_t	 fiveG_S_TMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_UEPagingIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UEPagingIdentity;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_UEPagingIdentity_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UEPagingIdentity_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_UEPagingIdentity_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UEPagingIdentity_H_ */
#include <asn_internal.h>
