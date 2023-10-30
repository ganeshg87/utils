/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_EventType_H_
#define	_S1ap_EventType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_EventType {
	S1ap_EventType_direct	= 0,
	S1ap_EventType_change_of_serve_cell	= 1,
	S1ap_EventType_stop_change_of_serve_cell	= 2
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_EventType;

/* S1ap_EventType */
typedef long	 S1ap_EventType_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1ap_EventType_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1ap_EventType;
extern const asn_INTEGER_specifics_t asn_SPC_S1ap_EventType_specs_1;
asn_struct_free_f S1ap_EventType_free;
asn_struct_print_f S1ap_EventType_print;
asn_constr_check_f S1ap_EventType_constraint;
ber_type_decoder_f S1ap_EventType_decode_ber;
der_type_encoder_f S1ap_EventType_encode_der;
xer_type_decoder_f S1ap_EventType_decode_xer;
xer_type_encoder_f S1ap_EventType_encode_xer;
jer_type_encoder_f S1ap_EventType_encode_jer;
oer_type_decoder_f S1ap_EventType_decode_oer;
oer_type_encoder_f S1ap_EventType_encode_oer;
per_type_decoder_f S1ap_EventType_decode_uper;
per_type_encoder_f S1ap_EventType_encode_uper;
per_type_decoder_f S1ap_EventType_decode_aper;
per_type_encoder_f S1ap_EventType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_EventType_H_ */
#include <asn_internal.h>