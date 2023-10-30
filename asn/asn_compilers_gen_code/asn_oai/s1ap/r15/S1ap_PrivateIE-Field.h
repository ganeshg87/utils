/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-Containers"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_PrivateIE_Field_H_
#define	_S1ap_PrivateIE_Field_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_PrivateIE-ID.h"
#include "S1ap_Criticality.h"
#include <ANY.h>
#include <asn_ioc.h>
#include <OPEN_TYPE.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_PrivateMessageIEs__value_PR {
	S1ap_PrivateMessageIEs__value_PR_NOTHING	/* No components present */
	
} S1ap_PrivateMessageIEs__value_PR;

/* S1ap_PrivateIE-Field */
typedef struct S1ap_PrivateMessageIEs {
	S1ap_PrivateIE_ID_t	 id;
	S1ap_Criticality_t	 criticality;
	struct S1ap_PrivateMessageIEs__value {
		S1ap_PrivateMessageIEs__value_PR present;
		union S1ap_PrivateMessageIEs__S1ap_value_u {
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} value;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_PrivateMessageIEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_PrivateMessageIEs;
extern asn_SEQUENCE_specifics_t asn_SPC_S1ap_PrivateMessageIEs_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_PrivateMessageIEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_PrivateIE_Field_H_ */
#include <asn_internal.h>
