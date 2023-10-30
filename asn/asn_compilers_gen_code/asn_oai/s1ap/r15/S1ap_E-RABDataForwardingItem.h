/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-PDU-Contents"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_E_RABDataForwardingItem_H_
#define	_S1ap_E_RABDataForwardingItem_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_E-RAB-ID.h"
#include "S1ap_TransportLayerAddress.h"
#include "S1ap_GTP-TEID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_ProtocolExtensionContainer;

/* S1ap_E-RABDataForwardingItem */
typedef struct S1ap_E_RABDataForwardingItem {
	S1ap_E_RAB_ID_t	 e_RAB_ID;
	S1ap_TransportLayerAddress_t	*dL_transportLayerAddress;	/* OPTIONAL */
	S1ap_GTP_TEID_t	*dL_gTP_TEID;	/* OPTIONAL */
	S1ap_TransportLayerAddress_t	*uL_TransportLayerAddress;	/* OPTIONAL */
	S1ap_GTP_TEID_t	*uL_GTP_TEID;	/* OPTIONAL */
	struct S1ap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_E_RABDataForwardingItem_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABDataForwardingItem;
extern asn_SEQUENCE_specifics_t asn_SPC_S1ap_E_RABDataForwardingItem_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_E_RABDataForwardingItem_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_E_RABDataForwardingItem_H_ */
#include <asn_internal.h>
