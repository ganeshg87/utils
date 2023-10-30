/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_SONtransferCause_H_
#define	_S1ap_SONtransferCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_CellLoadReportingCause.h"
#include "S1ap_HOReportingCause.h"
#include "S1ap_CellActivationCause.h"
#include "S1ap_CellStateIndicationCause.h"
#include "S1ap_FailureEventReportingCause.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_SONtransferCause_PR {
	S1ap_SONtransferCause_PR_NOTHING,	/* No components present */
	S1ap_SONtransferCause_PR_cellLoadReporting,
	/* Extensions may appear below */
	S1ap_SONtransferCause_PR_multiCellLoadReporting,
	S1ap_SONtransferCause_PR_eventTriggeredCellLoadReporting,
	S1ap_SONtransferCause_PR_hOReporting,
	S1ap_SONtransferCause_PR_eutranCellActivation,
	S1ap_SONtransferCause_PR_energySavingsIndication,
	S1ap_SONtransferCause_PR_failureEventReporting
} S1ap_SONtransferCause_PR;

/* S1ap_SONtransferCause */
typedef struct S1ap_SONtransferCause {
	S1ap_SONtransferCause_PR present;
	union S1ap_SONtransferCause_u {
		S1ap_CellLoadReportingCause_t	 cellLoadReporting;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1ap_CellLoadReportingCause_t	 multiCellLoadReporting;
		S1ap_CellLoadReportingCause_t	 eventTriggeredCellLoadReporting;
		S1ap_HOReportingCause_t	 hOReporting;
		S1ap_CellActivationCause_t	 eutranCellActivation;
		S1ap_CellStateIndicationCause_t	 energySavingsIndication;
		S1ap_FailureEventReportingCause_t	 failureEventReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_SONtransferCause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_SONtransferCause;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_SONtransferCause_H_ */
#include <asn_internal.h>
