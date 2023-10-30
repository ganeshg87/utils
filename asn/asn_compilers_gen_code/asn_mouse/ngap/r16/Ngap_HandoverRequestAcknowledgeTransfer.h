/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_HandoverRequestAcknowledgeTransfer_H_
#define	_Ngap_HandoverRequestAcknowledgeTransfer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_UPTransportLayerInformation.h"
#include "Ngap_QosFlowListWithDataForwarding.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_UPTransportLayerInformation;
struct Ngap_SecurityResult;
struct Ngap_QosFlowListWithCause;
struct Ngap_DataForwardingResponseDRBList;
struct Ngap_ProtocolExtensionContainer;

/* Ngap_HandoverRequestAcknowledgeTransfer */
typedef struct Ngap_HandoverRequestAcknowledgeTransfer {
	Ngap_UPTransportLayerInformation_t	 dL_NGU_UP_TNLInformation;
	struct Ngap_UPTransportLayerInformation	*dLForwardingUP_TNLInformation;	/* OPTIONAL */
	struct Ngap_SecurityResult	*securityResult;	/* OPTIONAL */
	Ngap_QosFlowListWithDataForwarding_t	 qosFlowSetupResponseList;
	struct Ngap_QosFlowListWithCause	*qosFlowFailedToSetupList;	/* OPTIONAL */
	struct Ngap_DataForwardingResponseDRBList	*dataForwardingResponseDRBList;	/* OPTIONAL */
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_HandoverRequestAcknowledgeTransfer_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_HandoverRequestAcknowledgeTransfer;

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_HandoverRequestAcknowledgeTransfer_H_ */
#include <asn_internal.h>
