/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_EventTriggeredCellLoadReportingResponse_H_
#define	_S1ap_EventTriggeredCellLoadReportingResponse_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_CellLoadReportingResponse.h"
#include "S1ap_OverloadFlag.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap_EventTriggeredCellLoadReportingResponse */
typedef struct S1ap_EventTriggeredCellLoadReportingResponse {
	S1ap_CellLoadReportingResponse_t	 cellLoadReportingResponse;
	S1ap_OverloadFlag_t	*overloadFlag;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_EventTriggeredCellLoadReportingResponse_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_EventTriggeredCellLoadReportingResponse;
extern asn_SEQUENCE_specifics_t asn_SPC_S1ap_EventTriggeredCellLoadReportingResponse_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_EventTriggeredCellLoadReportingResponse_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_EventTriggeredCellLoadReportingResponse_H_ */
#include <asn_internal.h>
