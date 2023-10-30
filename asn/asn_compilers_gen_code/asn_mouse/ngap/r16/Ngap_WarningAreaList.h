/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_WarningAreaList_H_
#define	_Ngap_WarningAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_EUTRA-CGIListForWarning.h"
#include "Ngap_NR-CGIListForWarning.h"
#include "Ngap_TAIListForWarning.h"
#include "Ngap_EmergencyAreaIDList.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_WarningAreaList_PR {
	Ngap_WarningAreaList_PR_NOTHING,	/* No components present */
	Ngap_WarningAreaList_PR_eUTRA_CGIListForWarning,
	Ngap_WarningAreaList_PR_nR_CGIListForWarning,
	Ngap_WarningAreaList_PR_tAIListForWarning,
	Ngap_WarningAreaList_PR_emergencyAreaIDList
	/* Extensions may appear below */
	
} Ngap_WarningAreaList_PR;

/* Ngap_WarningAreaList */
typedef struct Ngap_WarningAreaList {
	Ngap_WarningAreaList_PR present;
	union Ngap_WarningAreaList_u {
		Ngap_EUTRA_CGIListForWarning_t	 eUTRA_CGIListForWarning;
		Ngap_NR_CGIListForWarning_t	 nR_CGIListForWarning;
		Ngap_TAIListForWarning_t	 tAIListForWarning;
		Ngap_EmergencyAreaIDList_t	 emergencyAreaIDList;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_WarningAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_WarningAreaList;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_WarningAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_WarningAreaList_1[4];
extern asn_per_constraints_t asn_PER_type_Ngap_WarningAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_WarningAreaList_H_ */
#include <asn_internal.h>