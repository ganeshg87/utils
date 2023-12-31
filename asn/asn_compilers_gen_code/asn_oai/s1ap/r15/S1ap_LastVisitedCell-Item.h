/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_LastVisitedCell_Item_H_
#define	_S1ap_LastVisitedCell_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_LastVisitedEUTRANCellInformation.h"
#include "S1ap_LastVisitedUTRANCellInformation.h"
#include "S1ap_LastVisitedGERANCellInformation.h"
#include "S1ap_LastVisitedNGRANCellInformation.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_LastVisitedCell_Item_PR {
	S1ap_LastVisitedCell_Item_PR_NOTHING,	/* No components present */
	S1ap_LastVisitedCell_Item_PR_e_UTRAN_Cell,
	S1ap_LastVisitedCell_Item_PR_uTRAN_Cell,
	S1ap_LastVisitedCell_Item_PR_gERAN_Cell,
	/* Extensions may appear below */
	S1ap_LastVisitedCell_Item_PR_nG_RAN_Cell
} S1ap_LastVisitedCell_Item_PR;

/* S1ap_LastVisitedCell-Item */
typedef struct S1ap_LastVisitedCell_Item {
	S1ap_LastVisitedCell_Item_PR present;
	union S1ap_LastVisitedCell_Item_u {
		S1ap_LastVisitedEUTRANCellInformation_t	 e_UTRAN_Cell;
		S1ap_LastVisitedUTRANCellInformation_t	 uTRAN_Cell;
		S1ap_LastVisitedGERANCellInformation_t	 gERAN_Cell;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1ap_LastVisitedNGRANCellInformation_t	 nG_RAN_Cell;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_LastVisitedCell_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_LastVisitedCell_Item;
extern asn_CHOICE_specifics_t asn_SPC_S1ap_LastVisitedCell_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_LastVisitedCell_Item_1[4];
extern asn_per_constraints_t asn_PER_type_S1ap_LastVisitedCell_Item_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_LastVisitedCell_Item_H_ */
#include <asn_internal.h>
