/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_ConfidentialityProtectionResult_H_
#define	_Ngap_ConfidentialityProtectionResult_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_ConfidentialityProtectionResult {
	Ngap_ConfidentialityProtectionResult_performed	= 0,
	Ngap_ConfidentialityProtectionResult_not_performed	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_ConfidentialityProtectionResult;

/* Ngap_ConfidentialityProtectionResult */
typedef long	 Ngap_ConfidentialityProtectionResult_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_ConfidentialityProtectionResult_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ConfidentialityProtectionResult;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_ConfidentialityProtectionResult_specs_1;
asn_struct_free_f Ngap_ConfidentialityProtectionResult_free;
asn_struct_print_f Ngap_ConfidentialityProtectionResult_print;
asn_constr_check_f Ngap_ConfidentialityProtectionResult_constraint;
ber_type_decoder_f Ngap_ConfidentialityProtectionResult_decode_ber;
der_type_encoder_f Ngap_ConfidentialityProtectionResult_encode_der;
xer_type_decoder_f Ngap_ConfidentialityProtectionResult_decode_xer;
xer_type_encoder_f Ngap_ConfidentialityProtectionResult_encode_xer;
jer_type_encoder_f Ngap_ConfidentialityProtectionResult_encode_jer;
oer_type_decoder_f Ngap_ConfidentialityProtectionResult_decode_oer;
oer_type_encoder_f Ngap_ConfidentialityProtectionResult_encode_oer;
per_type_decoder_f Ngap_ConfidentialityProtectionResult_decode_uper;
per_type_encoder_f Ngap_ConfidentialityProtectionResult_encode_uper;
per_type_decoder_f Ngap_ConfidentialityProtectionResult_decode_aper;
per_type_encoder_f Ngap_ConfidentialityProtectionResult_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ConfidentialityProtectionResult_H_ */
#include <asn_internal.h>
