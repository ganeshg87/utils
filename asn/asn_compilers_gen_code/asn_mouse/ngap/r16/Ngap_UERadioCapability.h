/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_UERadioCapability_H_
#define	_Ngap_UERadioCapability_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_UERadioCapability */
typedef OCTET_STRING_t	 Ngap_UERadioCapability_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_UERadioCapability;
asn_struct_free_f Ngap_UERadioCapability_free;
asn_struct_print_f Ngap_UERadioCapability_print;
asn_constr_check_f Ngap_UERadioCapability_constraint;
ber_type_decoder_f Ngap_UERadioCapability_decode_ber;
der_type_encoder_f Ngap_UERadioCapability_encode_der;
xer_type_decoder_f Ngap_UERadioCapability_decode_xer;
xer_type_encoder_f Ngap_UERadioCapability_encode_xer;
jer_type_encoder_f Ngap_UERadioCapability_encode_jer;
oer_type_decoder_f Ngap_UERadioCapability_decode_oer;
oer_type_encoder_f Ngap_UERadioCapability_encode_oer;
per_type_decoder_f Ngap_UERadioCapability_decode_uper;
per_type_encoder_f Ngap_UERadioCapability_encode_uper;
per_type_decoder_f Ngap_UERadioCapability_decode_aper;
per_type_encoder_f Ngap_UERadioCapability_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_UERadioCapability_H_ */
#include <asn_internal.h>
