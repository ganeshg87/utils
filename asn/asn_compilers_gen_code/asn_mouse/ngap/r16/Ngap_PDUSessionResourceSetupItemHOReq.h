/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_PDUSessionResourceSetupItemHOReq_H_
#define	_Ngap_PDUSessionResourceSetupItemHOReq_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_PDUSessionID.h"
#include "Ngap_S-NSSAI.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_PDUSessionResourceSetupItemHOReq */
typedef struct Ngap_PDUSessionResourceSetupItemHOReq {
	Ngap_PDUSessionID_t	 pDUSessionID;
	Ngap_S_NSSAI_t	 s_NSSAI;
	OCTET_STRING_t	 handoverRequestTransfer;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_PDUSessionResourceSetupItemHOReq_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_PDUSessionResourceSetupItemHOReq;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_PDUSessionResourceSetupItemHOReq_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_PDUSessionResourceSetupItemHOReq_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_PDUSessionResourceSetupItemHOReq_H_ */
#include <asn_internal.h>
