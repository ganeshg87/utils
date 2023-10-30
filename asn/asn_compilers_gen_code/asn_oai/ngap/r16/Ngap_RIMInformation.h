/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -gen-PER -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_RIMInformation_H_
#define	_Ngap_RIMInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Ngap_GNBSetID.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_RIMInformation__rIM_RSDetection {
	Ngap_RIMInformation__rIM_RSDetection_rs_detected	= 0,
	Ngap_RIMInformation__rIM_RSDetection_rs_disappeared	= 1
	/*
	 * Enumeration is extensible
	 */
} e_Ngap_RIMInformation__rIM_RSDetection;

/* Ngap_RIMInformation */
typedef struct Ngap_RIMInformation {
	Ngap_GNBSetID_t	 targetgNBSetID;
	long	 rIM_RSDetection;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Ngap_RIMInformation_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_Ngap_rIM_RSDetection_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_Ngap_RIMInformation;
extern asn_SEQUENCE_specifics_t asn_SPC_Ngap_RIMInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_Ngap_RIMInformation_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_RIMInformation_H_ */
#include <asn_internal.h>
