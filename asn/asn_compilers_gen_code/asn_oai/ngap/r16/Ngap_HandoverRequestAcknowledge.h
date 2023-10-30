/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-PDU-Contents"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_HandoverRequestAcknowledge_H_
#define	_Ngap_HandoverRequestAcknowledge_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_ProtocolIE-Container.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_HandoverRequestAcknowledge */
typedef struct Ngap_HandoverRequestAcknowledge {
	Ngap_ProtocolIE_Container_6932P23_t	 protocolIEs;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_HandoverRequestAcknowledge_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_HandoverRequestAcknowledge;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_HandoverRequestAcknowledge_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_HandoverRequestAcknowledge_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_HandoverRequestAcknowledge_H_ */
#include <asn_internal.h>
