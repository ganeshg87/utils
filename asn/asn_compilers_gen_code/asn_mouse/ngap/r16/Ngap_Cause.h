/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_Cause_H_
#define	_Ngap_Cause_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_CauseRadioNetwork.h"
#include "Ngap_CauseTransport.h"
#include "Ngap_CauseNas.h"
#include "Ngap_CauseProtocol.h"
#include "Ngap_CauseMisc.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_Cause_PR {
	Ngap_Cause_PR_NOTHING,	/* No components present */
	Ngap_Cause_PR_radioNetwork,
	Ngap_Cause_PR_transport,
	Ngap_Cause_PR_nas,
	Ngap_Cause_PR_protocol,
	Ngap_Cause_PR_misc
	/* Extensions may appear below */
	
} Ngap_Cause_PR;

/* Ngap_Cause */
typedef struct Ngap_Cause {
	Ngap_Cause_PR present;
	union Ngap_Cause_u {
		Ngap_CauseRadioNetwork_t	 radioNetwork;
		Ngap_CauseTransport_t	 transport;
		Ngap_CauseNas_t	 nas;
		Ngap_CauseProtocol_t	 protocol;
		Ngap_CauseMisc_t	 misc;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_Cause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_Cause;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_Cause_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_Cause_1[5];
extern asn_per_constraints_t asn_PER_type_Ngap_Cause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_Cause_H_ */
#include <asn_internal.h>
