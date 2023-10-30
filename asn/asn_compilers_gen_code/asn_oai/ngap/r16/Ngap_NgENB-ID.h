/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_NgENB_ID_H_
#define	_Ngap_NgENB_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_NgENB_ID_PR {
	Ngap_NgENB_ID_PR_NOTHING,	/* No components present */
	Ngap_NgENB_ID_PR_macroNgENB_ID,
	Ngap_NgENB_ID_PR_shortMacroNgENB_ID,
	Ngap_NgENB_ID_PR_longMacroNgENB_ID
	/* Extensions may appear below */
	
} Ngap_NgENB_ID_PR;

/* Ngap_NgENB-ID */
typedef struct Ngap_NgENB_ID {
	Ngap_NgENB_ID_PR present;
	union Ngap_NgENB_ID_u {
		BIT_STRING_t	 macroNgENB_ID;
		BIT_STRING_t	 shortMacroNgENB_ID;
		BIT_STRING_t	 longMacroNgENB_ID;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_NgENB_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_NgENB_ID;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_NgENB_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_NgENB_ID_1[3];
extern asn_per_constraints_t asn_PER_type_Ngap_NgENB_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_NgENB_ID_H_ */
#include <asn_internal.h>
