/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_Inter_SystemInformationTransferType_H_
#define	_S1ap_Inter_SystemInformationTransferType_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_RIMTransfer.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Inter_SystemInformationTransferType_PR {
	S1ap_Inter_SystemInformationTransferType_PR_NOTHING,	/* No components present */
	S1ap_Inter_SystemInformationTransferType_PR_rIMTransfer
	/* Extensions may appear below */
	
} S1ap_Inter_SystemInformationTransferType_PR;

/* S1ap_Inter-SystemInformationTransferType */
typedef struct S1ap_Inter_SystemInformationTransferType {
	S1ap_Inter_SystemInformationTransferType_PR present;
	union S1ap_Inter_SystemInformationTransferType_u {
		S1ap_RIMTransfer_t	 rIMTransfer;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_Inter_SystemInformationTransferType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Inter_SystemInformationTransferType;
extern asn_CHOICE_specifics_t asn_SPC_S1ap_Inter_SystemInformationTransferType_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_Inter_SystemInformationTransferType_1[1];
extern asn_per_constraints_t asn_PER_type_S1ap_Inter_SystemInformationTransferType_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Inter_SystemInformationTransferType_H_ */
#include <asn_internal.h>
