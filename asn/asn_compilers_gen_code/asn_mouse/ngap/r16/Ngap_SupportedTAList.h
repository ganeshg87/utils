/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_SupportedTAList_H_
#define	_Ngap_SupportedTAList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_SupportedTAItem;

/* Ngap_SupportedTAList */
typedef struct Ngap_SupportedTAList {
	A_SEQUENCE_OF(struct Ngap_SupportedTAItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_SupportedTAList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_SupportedTAList;
extern asn_SET_OF_specifics_t asn_SPC_Ngap_SupportedTAList_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_SupportedTAList_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_SupportedTAList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_SupportedTAList_H_ */
#include <asn_internal.h>
