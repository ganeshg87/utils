/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_Cause_H_
#define	_S1ap_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_CauseRadioNetwork.h"
#include "S1ap_CauseTransport.h"
#include "S1ap_CauseNas.h"
#include "S1ap_CauseProtocol.h"
#include "S1ap_CauseMisc.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Cause_PR {
	S1ap_Cause_PR_NOTHING,	/* No components present */
	S1ap_Cause_PR_radioNetwork,
	S1ap_Cause_PR_transport,
	S1ap_Cause_PR_nas,
	S1ap_Cause_PR_protocol,
	S1ap_Cause_PR_misc
	/* Extensions may appear below */
	
} S1ap_Cause_PR;

/* S1ap_Cause */
typedef struct S1ap_Cause {
	S1ap_Cause_PR present;
	union S1ap_Cause_u {
		S1ap_CauseRadioNetwork_t	 radioNetwork;
		S1ap_CauseTransport_t	 transport;
		S1ap_CauseNas_t	 nas;
		S1ap_CauseProtocol_t	 protocol;
		S1ap_CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Cause;
extern asn_CHOICE_specifics_t asn_SPC_S1ap_Cause_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_Cause_1[5];
extern asn_per_constraints_t asn_PER_type_S1ap_Cause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Cause_H_ */
#include <asn_internal.h>
