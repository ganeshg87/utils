/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_WLANMeasurementConfiguration_H_
#define	_S1ap_WLANMeasurementConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_WLANMeasConfig.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_WLANMeasurementConfiguration__wlan_rssi {
	S1ap_WLANMeasurementConfiguration__wlan_rssi_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_WLANMeasurementConfiguration__wlan_rssi;
typedef enum S1ap_WLANMeasurementConfiguration__wlan_rtt {
	S1ap_WLANMeasurementConfiguration__wlan_rtt_true	= 0
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_WLANMeasurementConfiguration__wlan_rtt;

/* Forward declarations */
struct S1ap_WLANMeasConfigNameList;
struct S1ap_ProtocolExtensionContainer;

/* S1ap_WLANMeasurementConfiguration */
typedef struct S1ap_WLANMeasurementConfiguration {
	S1ap_WLANMeasConfig_t	 wlanMeasConfig;
	struct S1ap_WLANMeasConfigNameList	*wlanMeasConfigNameList;	/* OPTIONAL */
	long	*wlan_rssi;	/* OPTIONAL */
	long	*wlan_rtt;	/* OPTIONAL */
	struct S1ap_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_WLANMeasurementConfiguration_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_S1ap_wlan_rssi_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_S1ap_wlan_rtt_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_WLANMeasurementConfiguration;
extern asn_SEQUENCE_specifics_t asn_SPC_S1ap_WLANMeasurementConfiguration_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_WLANMeasurementConfiguration_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_WLANMeasurementConfiguration_H_ */
#include <asn_internal.h>
