/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_UE_NGAP_IDs_H_
#define	_Ngap_UE_NGAP_IDs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_UE-NGAP-ID-pair.h"
#include "Ngap_AMF-UE-NGAP-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_UE_NGAP_IDs_PR {
	Ngap_UE_NGAP_IDs_PR_NOTHING,	/* No components present */
	Ngap_UE_NGAP_IDs_PR_uE_NGAP_ID_pair,
	Ngap_UE_NGAP_IDs_PR_aMF_UE_NGAP_ID
	/* Extensions may appear below */
	
} Ngap_UE_NGAP_IDs_PR;

/* Ngap_UE-NGAP-IDs */
typedef struct Ngap_UE_NGAP_IDs {
	Ngap_UE_NGAP_IDs_PR present;
	union Ngap_UE_NGAP_IDs_u {
		Ngap_UE_NGAP_ID_pair_t	 uE_NGAP_ID_pair;
		Ngap_AMF_UE_NGAP_ID_t	 aMF_UE_NGAP_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_UE_NGAP_IDs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UE_NGAP_IDs;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_UE_NGAP_IDs_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_UE_NGAP_IDs_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_UE_NGAP_IDs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UE_NGAP_IDs_H_ */
#include <asn_internal.h>