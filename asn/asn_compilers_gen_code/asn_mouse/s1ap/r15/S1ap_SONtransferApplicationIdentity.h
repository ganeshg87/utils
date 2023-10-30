/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_SONtransferApplicationIdentity_H_
#define	_S1ap_SONtransferApplicationIdentity_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_SONtransferApplicationIdentity {
	S1ap_SONtransferApplicationIdentity_cell_load_reporting	= 0,
	/*
	 * Enumeration is extensible
	 */
	S1ap_SONtransferApplicationIdentity_multi_cell_load_reporting	= 1,
	S1ap_SONtransferApplicationIdentity_event_triggered_cell_load_reporting	= 2,
	S1ap_SONtransferApplicationIdentity_ho_reporting	= 3,
	S1ap_SONtransferApplicationIdentity_eutran_cell_activation	= 4,
	S1ap_SONtransferApplicationIdentity_energy_savings_indication	= 5,
	S1ap_SONtransferApplicationIdentity_failure_event_reporting	= 6
} e_S1ap_SONtransferApplicationIdentity;

/* S1ap_SONtransferApplicationIdentity */
typedef long	 S1ap_SONtransferApplicationIdentity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_SONtransferApplicationIdentity;
asn_struct_free_f S1ap_SONtransferApplicationIdentity_free;
asn_struct_print_f S1ap_SONtransferApplicationIdentity_print;
asn_constr_check_f S1ap_SONtransferApplicationIdentity_constraint;
ber_type_decoder_f S1ap_SONtransferApplicationIdentity_decode_ber;
der_type_encoder_f S1ap_SONtransferApplicationIdentity_encode_der;
xer_type_decoder_f S1ap_SONtransferApplicationIdentity_decode_xer;
xer_type_encoder_f S1ap_SONtransferApplicationIdentity_encode_xer;
jer_type_encoder_f S1ap_SONtransferApplicationIdentity_encode_jer;
oer_type_decoder_f S1ap_SONtransferApplicationIdentity_decode_oer;
oer_type_encoder_f S1ap_SONtransferApplicationIdentity_encode_oer;
per_type_decoder_f S1ap_SONtransferApplicationIdentity_decode_uper;
per_type_encoder_f S1ap_SONtransferApplicationIdentity_encode_uper;
per_type_decoder_f S1ap_SONtransferApplicationIdentity_decode_aper;
per_type_encoder_f S1ap_SONtransferApplicationIdentity_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_SONtransferApplicationIdentity_H_ */
#include <asn_internal.h>
