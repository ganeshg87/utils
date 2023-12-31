/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Descriptions"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_S1AP_PDU_H_
#define	_S1ap_S1AP_PDU_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_InitiatingMessage.h"
#include "S1ap_SuccessfulOutcome.h"
#include "S1ap_UnsuccessfulOutcome.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_S1AP_PDU_PR {
	S1ap_S1AP_PDU_PR_NOTHING,	/* No components present */
	S1ap_S1AP_PDU_PR_initiatingMessage,
	S1ap_S1AP_PDU_PR_successfulOutcome,
	S1ap_S1AP_PDU_PR_unsuccessfulOutcome
	/* Extensions may appear below */
	
} S1ap_S1AP_PDU_PR;

/* S1ap_S1AP-PDU */
typedef struct S1ap_S1AP_PDU {
	S1ap_S1AP_PDU_PR present;
	union S1ap_S1AP_PDU_u {
		S1ap_InitiatingMessage_t	 initiatingMessage;
		S1ap_SuccessfulOutcome_t	 successfulOutcome;
		S1ap_UnsuccessfulOutcome_t	 unsuccessfulOutcome;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_S1AP_PDU_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_S1AP_PDU;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_S1AP_PDU_H_ */
#include <asn_internal.h>
