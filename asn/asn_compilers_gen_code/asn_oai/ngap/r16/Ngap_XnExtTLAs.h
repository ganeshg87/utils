/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_XnExtTLAs_H_
#define	_Ngap_XnExtTLAs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_XnExtTLA_Item;

/* Ngap_XnExtTLAs */
typedef struct Ngap_XnExtTLAs {
	A_SEQUENCE_OF(struct Ngap_XnExtTLA_Item) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_XnExtTLAs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_XnExtTLAs;
extern asn_SET_OF_specifics_t asn_SPC_Ngap_XnExtTLAs_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_XnExtTLAs_1[1];
extern asn_per_constraints_t asn_PER_type_Ngap_XnExtTLAs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_XnExtTLAs_H_ */
#include <asn_internal.h>
