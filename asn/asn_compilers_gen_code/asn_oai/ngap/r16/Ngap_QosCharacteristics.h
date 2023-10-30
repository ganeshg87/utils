/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_QosCharacteristics_H_
#define	_Ngap_QosCharacteristics_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_NonDynamic5QIDescriptor.h"
#include "Ngap_Dynamic5QIDescriptor.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_QosCharacteristics_PR {
	Ngap_QosCharacteristics_PR_NOTHING,	/* No components present */
	Ngap_QosCharacteristics_PR_nonDynamic5QI,
	Ngap_QosCharacteristics_PR_dynamic5QI
	/* Extensions may appear below */
	
} Ngap_QosCharacteristics_PR;

/* Ngap_QosCharacteristics */
typedef struct Ngap_QosCharacteristics {
	Ngap_QosCharacteristics_PR present;
	union Ngap_QosCharacteristics_u {
		Ngap_NonDynamic5QIDescriptor_t	 nonDynamic5QI;
		Ngap_Dynamic5QIDescriptor_t	 dynamic5QI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_QosCharacteristics_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_QosCharacteristics;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_QosCharacteristics_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_QosCharacteristics_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_QosCharacteristics_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_QosCharacteristics_H_ */
#include <asn_internal.h>
