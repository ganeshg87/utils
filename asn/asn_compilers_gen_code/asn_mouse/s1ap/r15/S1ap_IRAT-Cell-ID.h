/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_IRAT_Cell_ID_H_
#define	_S1ap_IRAT_Cell_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include "S1ap_EHRPD-Sector-ID.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_IRAT_Cell_ID_PR {
	S1ap_IRAT_Cell_ID_PR_NOTHING,	/* No components present */
	S1ap_IRAT_Cell_ID_PR_eUTRAN,
	S1ap_IRAT_Cell_ID_PR_uTRAN,
	S1ap_IRAT_Cell_ID_PR_gERAN,
	/* Extensions may appear below */
	S1ap_IRAT_Cell_ID_PR_eHRPD
} S1ap_IRAT_Cell_ID_PR;

/* S1ap_IRAT-Cell-ID */
typedef struct S1ap_IRAT_Cell_ID {
	S1ap_IRAT_Cell_ID_PR present;
	union S1ap_IRAT_Cell_ID_u {
		OCTET_STRING_t	 eUTRAN;
		OCTET_STRING_t	 uTRAN;
		OCTET_STRING_t	 gERAN;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		S1ap_EHRPD_Sector_ID_t	 eHRPD;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_IRAT_Cell_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_IRAT_Cell_ID;
extern asn_CHOICE_specifics_t asn_SPC_S1ap_IRAT_Cell_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_IRAT_Cell_ID_1[4];
extern asn_per_constraints_t asn_PER_type_S1ap_IRAT_Cell_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_IRAT_Cell_ID_H_ */
#include <asn_internal.h>
