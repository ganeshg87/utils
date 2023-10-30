/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_Extended_UEIdentityIndexValue_H_
#define	_S1ap_Extended_UEIdentityIndexValue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* S1ap_Extended-UEIdentityIndexValue */
typedef BIT_STRING_t	 S1ap_Extended_UEIdentityIndexValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1ap_Extended_UEIdentityIndexValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Extended_UEIdentityIndexValue;
asn_struct_free_f S1ap_Extended_UEIdentityIndexValue_free;
asn_struct_print_f S1ap_Extended_UEIdentityIndexValue_print;
asn_constr_check_f S1ap_Extended_UEIdentityIndexValue_constraint;
ber_type_decoder_f S1ap_Extended_UEIdentityIndexValue_decode_ber;
der_type_encoder_f S1ap_Extended_UEIdentityIndexValue_encode_der;
xer_type_decoder_f S1ap_Extended_UEIdentityIndexValue_decode_xer;
xer_type_encoder_f S1ap_Extended_UEIdentityIndexValue_encode_xer;
jer_type_encoder_f S1ap_Extended_UEIdentityIndexValue_encode_jer;
oer_type_decoder_f S1ap_Extended_UEIdentityIndexValue_decode_oer;
oer_type_encoder_f S1ap_Extended_UEIdentityIndexValue_encode_oer;
per_type_decoder_f S1ap_Extended_UEIdentityIndexValue_decode_uper;
per_type_encoder_f S1ap_Extended_UEIdentityIndexValue_encode_uper;
per_type_decoder_f S1ap_Extended_UEIdentityIndexValue_decode_aper;
per_type_encoder_f S1ap_Extended_UEIdentityIndexValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Extended_UEIdentityIndexValue_H_ */
#include <asn_internal.h>
