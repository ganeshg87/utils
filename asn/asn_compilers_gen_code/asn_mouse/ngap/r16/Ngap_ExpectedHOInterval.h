/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_ExpectedHOInterval_H_
#define	_Ngap_ExpectedHOInterval_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_ExpectedHOInterval {
	Ngap_ExpectedHOInterval_sec15	= 0,
	Ngap_ExpectedHOInterval_sec30	= 1,
	Ngap_ExpectedHOInterval_sec60	= 2,
	Ngap_ExpectedHOInterval_sec90	= 3,
	Ngap_ExpectedHOInterval_sec120	= 4,
	Ngap_ExpectedHOInterval_sec180	= 5,
	Ngap_ExpectedHOInterval_long_time	= 6
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_ExpectedHOInterval;

/* Ngap_ExpectedHOInterval */
typedef long	 Ngap_ExpectedHOInterval_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_ExpectedHOInterval_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ExpectedHOInterval;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_ExpectedHOInterval_specs_1;
asn_struct_free_f Ngap_ExpectedHOInterval_free;
asn_struct_print_f Ngap_ExpectedHOInterval_print;
asn_constr_check_f Ngap_ExpectedHOInterval_constraint;
ber_type_decoder_f Ngap_ExpectedHOInterval_decode_ber;
der_type_encoder_f Ngap_ExpectedHOInterval_encode_der;
xer_type_decoder_f Ngap_ExpectedHOInterval_decode_xer;
xer_type_encoder_f Ngap_ExpectedHOInterval_encode_xer;
jer_type_encoder_f Ngap_ExpectedHOInterval_encode_jer;
oer_type_decoder_f Ngap_ExpectedHOInterval_decode_oer;
oer_type_encoder_f Ngap_ExpectedHOInterval_encode_oer;
per_type_decoder_f Ngap_ExpectedHOInterval_decode_uper;
per_type_encoder_f Ngap_ExpectedHOInterval_encode_uper;
per_type_decoder_f Ngap_ExpectedHOInterval_decode_aper;
per_type_encoder_f Ngap_ExpectedHOInterval_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ExpectedHOInterval_H_ */
#include <asn_internal.h>
