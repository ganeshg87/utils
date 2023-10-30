/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_MDTMode_H_
#define	_S1ap_MDTMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_ImmediateMDT.h"
#include "S1ap_LoggedMDT.h"
#include "S1ap_MDTMode-Extension.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_MDTMode_PR {
	S1ap_MDTMode_PR_NOTHING,	/* No components present */
	S1ap_MDTMode_PR_immediateMDT,
	S1ap_MDTMode_PR_loggedMDT,
	/* Extensions may appear below */
	S1ap_MDTMode_PR_mDTMode_Extension
} S1ap_MDTMode_PR;

/* S1ap_MDTMode */
typedef struct S1ap_MDTMode {
	S1ap_MDTMode_PR present;
	union S1ap_MDTMode_u {
		S1ap_ImmediateMDT_t	 immediateMDT;
		S1ap_LoggedMDT_t	 loggedMDT;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1ap_MDTMode_Extension_t	 mDTMode_Extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_MDTMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_MDTMode;
extern asn_CHOICE_specifics_t asn_SPC_S1ap_MDTMode_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_MDTMode_1[3];
extern asn_per_constraints_t asn_PER_type_S1ap_MDTMode_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_MDTMode_H_ */
#include <asn_internal.h>
