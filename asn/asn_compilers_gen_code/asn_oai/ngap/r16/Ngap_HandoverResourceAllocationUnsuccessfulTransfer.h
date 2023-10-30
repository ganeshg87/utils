/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_HandoverResourceAllocationUnsuccessfulTransfer_H_
#define	_Ngap_HandoverResourceAllocationUnsuccessfulTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_Cause.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_CriticalityDiagnostics;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_HandoverResourceAllocationUnsuccessfulTransfer */
typedef struct Ngap_HandoverResourceAllocationUnsuccessfulTransfer {
	Ngap_Cause_t	 cause;
	struct Ngap_CriticalityDiagnostics	*criticalityDiagnostics;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_HandoverResourceAllocationUnsuccessfulTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_HandoverResourceAllocationUnsuccessfulTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_HandoverResourceAllocationUnsuccessfulTransfer_H_ */
#include <asn_internal.h>
