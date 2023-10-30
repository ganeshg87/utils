/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_ENBX2TLAs_H_
#define	_S1ap_ENBX2TLAs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_TransportLayerAddress.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap_ENBX2TLAs */
typedef struct S1ap_ENBX2TLAs {
	A_SEQUENCE_OF(S1ap_TransportLayerAddress_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_ENBX2TLAs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_ENBX2TLAs;
extern asn_SET_OF_specifics_t asn_SPC_S1ap_ENBX2TLAs_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_ENBX2TLAs_1[1];
extern asn_per_constraints_t asn_PER_type_S1ap_ENBX2TLAs_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_ENBX2TLAs_H_ */
#include <asn_internal.h>
