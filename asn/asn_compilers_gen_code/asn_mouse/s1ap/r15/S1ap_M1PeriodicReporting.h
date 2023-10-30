/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_M1PeriodicReporting_H_
#define	_S1ap_M1PeriodicReporting_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_ReportIntervalMDT.h"
#include "S1ap_ReportAmountMDT.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_ProtocolExtensionContainer;

/* S1ap_M1PeriodicReporting */
typedef struct S1ap_M1PeriodicReporting {
	S1ap_ReportIntervalMDT_t	 reportInterval;
	S1ap_ReportAmountMDT_t	 reportAmount;
	struct S1ap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_M1PeriodicReporting_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_M1PeriodicReporting;
extern asn_SEQUENCE_specifics_t asn_SPC_S1ap_M1PeriodicReporting_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_M1PeriodicReporting_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_M1PeriodicReporting_H_ */
#include <asn_internal.h>
