/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_Coverage_Level_H_
#define	_S1ap_Coverage_Level_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_Coverage_Level {
	S1ap_Coverage_Level_extendedcoverage	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_Coverage_Level;

/* S1ap_Coverage-Level */
typedef long	 S1ap_Coverage_Level_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_S1ap_Coverage_Level_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_S1ap_Coverage_Level;
extern const asn_INTEGER_specifics_t asn_SPC_S1ap_Coverage_Level_specs_1;
asn_struct_free_f S1ap_Coverage_Level_free;
asn_struct_print_f S1ap_Coverage_Level_print;
asn_constr_check_f S1ap_Coverage_Level_constraint;
ber_type_decoder_f S1ap_Coverage_Level_decode_ber;
der_type_encoder_f S1ap_Coverage_Level_encode_der;
xer_type_decoder_f S1ap_Coverage_Level_decode_xer;
xer_type_encoder_f S1ap_Coverage_Level_encode_xer;
jer_type_encoder_f S1ap_Coverage_Level_encode_jer;
oer_type_decoder_f S1ap_Coverage_Level_decode_oer;
oer_type_encoder_f S1ap_Coverage_Level_encode_oer;
per_type_decoder_f S1ap_Coverage_Level_decode_uper;
per_type_encoder_f S1ap_Coverage_Level_encode_uper;
per_type_decoder_f S1ap_Coverage_Level_decode_aper;
per_type_encoder_f S1ap_Coverage_Level_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_Coverage_Level_H_ */
#include <asn_internal.h>
