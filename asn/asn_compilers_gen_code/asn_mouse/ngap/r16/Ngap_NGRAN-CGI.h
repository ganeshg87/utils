/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_NGRAN_CGI_H_
#define	_Ngap_NGRAN_CGI_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_NR-CGI.h"
#include "Ngap_EUTRA-CGI.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NGRAN_CGI_PR {
	Ngap_NGRAN_CGI_PR_NOTHING,	/* No components present */
	Ngap_NGRAN_CGI_PR_nR_CGI,
	Ngap_NGRAN_CGI_PR_eUTRA_CGI
	/* Extensions may appear below */
	
} Ngap_NGRAN_CGI_PR;

/* Ngap_NGRAN-CGI */
typedef struct Ngap_NGRAN_CGI {
	Ngap_NGRAN_CGI_PR present;
	union Ngap_NGRAN_CGI_u {
		Ngap_NR_CGI_t	 nR_CGI;
		Ngap_EUTRA_CGI_t	 eUTRA_CGI;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_NGRAN_CGI_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NGRAN_CGI;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_NGRAN_CGI_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_NGRAN_CGI_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_NGRAN_CGI_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NGRAN_CGI_H_ */
#include <asn_internal.h>