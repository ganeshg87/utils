/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_LoggingDuration_H_
#define	_S1ap_LoggingDuration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_LoggingDuration {
	S1ap_LoggingDuration_m10	= 0,
	S1ap_LoggingDuration_m20	= 1,
	S1ap_LoggingDuration_m40	= 2,
	S1ap_LoggingDuration_m60	= 3,
	S1ap_LoggingDuration_m90	= 4,
	S1ap_LoggingDuration_m120	= 5
} e_S1ap_LoggingDuration;

/* S1ap_LoggingDuration */
typedef long	 S1ap_LoggingDuration_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1ap_LoggingDuration_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1ap_LoggingDuration;
extern const asn_INTEGER_specifics_t asn_SPC_S1ap_LoggingDuration_specs_1;
asn_struct_free_f S1ap_LoggingDuration_free;
asn_struct_print_f S1ap_LoggingDuration_print;
asn_constr_check_f S1ap_LoggingDuration_constraint;
ber_type_decoder_f S1ap_LoggingDuration_decode_ber;
der_type_encoder_f S1ap_LoggingDuration_encode_der;
xer_type_decoder_f S1ap_LoggingDuration_decode_xer;
xer_type_encoder_f S1ap_LoggingDuration_encode_xer;
oer_type_decoder_f S1ap_LoggingDuration_decode_oer;
oer_type_encoder_f S1ap_LoggingDuration_encode_oer;
per_type_decoder_f S1ap_LoggingDuration_decode_uper;
per_type_encoder_f S1ap_LoggingDuration_encode_uper;
per_type_decoder_f S1ap_LoggingDuration_decode_aper;
per_type_encoder_f S1ap_LoggingDuration_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_LoggingDuration_H_ */
#include <asn_internal.h>
