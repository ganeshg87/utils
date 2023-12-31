/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_BroadcastCancelledAreaList_H_
#define	_Ngap_BroadcastCancelledAreaList_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_CellIDCancelledEUTRA.h"
#include "Ngap_TAICancelledEUTRA.h"
#include "Ngap_EmergencyAreaIDCancelledEUTRA.h"
#include "Ngap_CellIDCancelledNR.h"
#include "Ngap_TAICancelledNR.h"
#include "Ngap_EmergencyAreaIDCancelledNR.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_BroadcastCancelledAreaList_PR {
	Ngap_BroadcastCancelledAreaList_PR_NOTHING,	/* No components present */
	Ngap_BroadcastCancelledAreaList_PR_cellIDCancelledEUTRA,
	Ngap_BroadcastCancelledAreaList_PR_tAICancelledEUTRA,
	Ngap_BroadcastCancelledAreaList_PR_emergencyAreaIDCancelledEUTRA,
	Ngap_BroadcastCancelledAreaList_PR_cellIDCancelledNR,
	Ngap_BroadcastCancelledAreaList_PR_tAICancelledNR,
	Ngap_BroadcastCancelledAreaList_PR_emergencyAreaIDCancelledNR
	/* Extensions may appear below */
	
} Ngap_BroadcastCancelledAreaList_PR;

/* Ngap_BroadcastCancelledAreaList */
typedef struct Ngap_BroadcastCancelledAreaList {
	Ngap_BroadcastCancelledAreaList_PR present;
	union Ngap_BroadcastCancelledAreaList_u {
		Ngap_CellIDCancelledEUTRA_t	 cellIDCancelledEUTRA;
		Ngap_TAICancelledEUTRA_t	 tAICancelledEUTRA;
		Ngap_EmergencyAreaIDCancelledEUTRA_t	 emergencyAreaIDCancelledEUTRA;
		Ngap_CellIDCancelledNR_t	 cellIDCancelledNR;
		Ngap_TAICancelledNR_t	 tAICancelledNR;
		Ngap_EmergencyAreaIDCancelledNR_t	 emergencyAreaIDCancelledNR;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_BroadcastCancelledAreaList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_BroadcastCancelledAreaList;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_BroadcastCancelledAreaList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_BroadcastCancelledAreaList_1[6];
extern asn_per_constraints_t asn_PER_type_Ngap_BroadcastCancelledAreaList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_BroadcastCancelledAreaList_H_ */
#include <asn_internal.h>
