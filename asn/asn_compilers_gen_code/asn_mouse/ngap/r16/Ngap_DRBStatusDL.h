/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_DRBStatusDL_H_
#define	_Ngap_DRBStatusDL_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_DRBStatusDL12.h"
#include "Ngap_DRBStatusDL18.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_DRBStatusDL_PR {
	Ngap_DRBStatusDL_PR_NOTHING,	/* No components present */
	Ngap_DRBStatusDL_PR_dRBStatusDL12,
	Ngap_DRBStatusDL_PR_dRBStatusDL18
	/* Extensions may appear below */
	
} Ngap_DRBStatusDL_PR;

/* Ngap_DRBStatusDL */
typedef struct Ngap_DRBStatusDL {
	Ngap_DRBStatusDL_PR present;
	union Ngap_DRBStatusDL_u {
		Ngap_DRBStatusDL12_t	 dRBStatusDL12;
		Ngap_DRBStatusDL18_t	 dRBStatusDL18;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_DRBStatusDL_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_DRBStatusDL;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_DRBStatusDL_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_DRBStatusDL_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_DRBStatusDL_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_DRBStatusDL_H_ */
#include <asn_internal.h>
