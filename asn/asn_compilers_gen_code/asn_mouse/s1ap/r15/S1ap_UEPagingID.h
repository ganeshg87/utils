/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_UEPagingID_H_
#define	_S1ap_UEPagingID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_S-TMSI.h"
#include "S1ap_IMSI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_UEPagingID_PR {
	S1ap_UEPagingID_PR_NOTHING,	/* No components present */
	S1ap_UEPagingID_PR_s_TMSI,
	S1ap_UEPagingID_PR_iMSI
	/* Extensions may appear below */
	
} S1ap_UEPagingID_PR;

/* S1ap_UEPagingID */
typedef struct S1ap_UEPagingID {
	S1ap_UEPagingID_PR present;
	union S1ap_UEPagingID_u {
		S1ap_S_TMSI_t	 s_TMSI;
		S1ap_IMSI_t	 iMSI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_UEPagingID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_UEPagingID;
extern asn_CHOICE_specifics_t asn_SPC_S1ap_UEPagingID_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_UEPagingID_1[2];
extern asn_per_constraints_t asn_PER_type_S1ap_UEPagingID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_UEPagingID_H_ */
#include <asn_internal.h>
