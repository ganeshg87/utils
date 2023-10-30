/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_CellIDBroadcastNR_Item_H_
#define	_Ngap_CellIDBroadcastNR_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_NR-CGI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct Ngap_ProtocolExtensionContainer;

/* Ngap_CellIDBroadcastNR-Item */
typedef struct Ngap_CellIDBroadcastNR_Item {
	Ngap_NR_CGI_t	 nR_CGI;
	struct Ngap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_CellIDBroadcastNR_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_CellIDBroadcastNR_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_CellIDBroadcastNR_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_CellIDBroadcastNR_Item_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_CellIDBroadcastNR_Item_H_ */
#include <asn_internal.h>
