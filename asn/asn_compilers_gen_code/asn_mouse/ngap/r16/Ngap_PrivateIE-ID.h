/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_PrivateIE_ID_H_
#define	_Ngap_PrivateIE_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <OBJECT_IDENTIFIER.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_PrivateIE_ID_PR {
	Ngap_PrivateIE_ID_PR_NOTHING,	/* No components present */
	Ngap_PrivateIE_ID_PR_local,
	Ngap_PrivateIE_ID_PR_global
} Ngap_PrivateIE_ID_PR;

/* Ngap_PrivateIE-ID */
typedef struct Ngap_PrivateIE_ID {
	Ngap_PrivateIE_ID_PR present;
	union Ngap_PrivateIE_ID_u {
		long	 local;
		OBJECT_IDENTIFIER_t	 global;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_PrivateIE_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PrivateIE_ID;
extern asn_CHOICE_specifics_t asn_SPC_Ngap_PrivateIE_ID_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PrivateIE_ID_1[2];
extern asn_per_constraints_t asn_PER_type_Ngap_PrivateIE_ID_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PrivateIE_ID_H_ */
#include <asn_internal.h>
