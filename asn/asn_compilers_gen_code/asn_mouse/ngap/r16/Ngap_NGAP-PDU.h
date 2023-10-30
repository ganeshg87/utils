/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Descriptions"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_NGAP_PDU_H_
#define	_Ngap_NGAP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_InitiatingMessage.h"
#include "Ngap_SuccessfulOutcome.h"
#include "Ngap_UnsuccessfulOutcome.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NGAP_PDU_PR {
	Ngap_NGAP_PDU_PR_NOTHING,	/* No components present */
	Ngap_NGAP_PDU_PR_initiatingMessage,
	Ngap_NGAP_PDU_PR_successfulOutcome,
	Ngap_NGAP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} Ngap_NGAP_PDU_PR;

/* Ngap_NGAP-PDU */
typedef struct Ngap_NGAP_PDU {
	Ngap_NGAP_PDU_PR present;
	union Ngap_NGAP_PDU_u {
		Ngap_InitiatingMessage_t	 initiatingMessage;
		Ngap_SuccessfulOutcome_t	 successfulOutcome;
		Ngap_UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_NGAP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NGAP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NGAP_PDU_H_ */
#include <asn_internal.h>
