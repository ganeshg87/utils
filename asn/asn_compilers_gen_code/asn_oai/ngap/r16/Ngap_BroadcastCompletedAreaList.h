/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_BroadcastCompletedAreaList_H_
#define	_Ngap_BroadcastCompletedAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_CellIDBroadcastEUTRA.h"
#include "Ngap_TAIBroadcastEUTRA.h"
#include "Ngap_EmergencyAreaIDBroadcastEUTRA.h"
#include "Ngap_CellIDBroadcastNR.h"
#include "Ngap_TAIBroadcastNR.h"
#include "Ngap_EmergencyAreaIDBroadcastNR.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_BroadcastCompletedAreaList_PR {
	Ngap_BroadcastCompletedAreaList_PR_NOTHING,	/* No components present */
	Ngap_BroadcastCompletedAreaList_PR_cellIDBroadcastEUTRA,
	Ngap_BroadcastCompletedAreaList_PR_tAIBroadcastEUTRA,
	Ngap_BroadcastCompletedAreaList_PR_emergencyAreaIDBroadcastEUTRA,
	Ngap_BroadcastCompletedAreaList_PR_cellIDBroadcastNR,
	Ngap_BroadcastCompletedAreaList_PR_tAIBroadcastNR,
	Ngap_BroadcastCompletedAreaList_PR_emergencyAreaIDBroadcastNR
	/* Extensions may appear below */
	
} Ngap_BroadcastCompletedAreaList_PR;

/* Ngap_BroadcastCompletedAreaList */
typedef struct Ngap_BroadcastCompletedAreaList {
	Ngap_BroadcastCompletedAreaList_PR present;
	union Ngap_BroadcastCompletedAreaList_u {
		Ngap_CellIDBroadcastEUTRA_t	 cellIDBroadcastEUTRA;
		Ngap_TAIBroadcastEUTRA_t	 tAIBroadcastEUTRA;
		Ngap_EmergencyAreaIDBroadcastEUTRA_t	 emergencyAreaIDBroadcastEUTRA;
		Ngap_CellIDBroadcastNR_t	 cellIDBroadcastNR;
		Ngap_TAIBroadcastNR_t	 tAIBroadcastNR;
		Ngap_EmergencyAreaIDBroadcastNR_t	 emergencyAreaIDBroadcastNR;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_BroadcastCompletedAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_BroadcastCompletedAreaList;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_BroadcastCompletedAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_BroadcastCompletedAreaList_1[6];
extern asn_per_constraints_t asn_PER_type_Ngap_BroadcastCompletedAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_BroadcastCompletedAreaList_H_ */
#include <asn_internal.h>
