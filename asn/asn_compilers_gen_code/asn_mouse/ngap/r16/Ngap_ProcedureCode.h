/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/ngap/messages/asn1/r16/r16.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/ngap/r16`
 */

#ifndef	_Ngap_ProcedureCode_H_
#define	_Ngap_ProcedureCode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Ngap_ProcedureCode */
typedef long	 Ngap_ProcedureCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_ProcedureCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_ProcedureCode;
asn_struct_free_f Ngap_ProcedureCode_free;
asn_struct_print_f Ngap_ProcedureCode_print;
asn_constr_check_f Ngap_ProcedureCode_constraint;
ber_type_decoder_f Ngap_ProcedureCode_decode_ber;
der_type_encoder_f Ngap_ProcedureCode_encode_der;
xer_type_decoder_f Ngap_ProcedureCode_decode_xer;
xer_type_encoder_f Ngap_ProcedureCode_encode_xer;
jer_type_encoder_f Ngap_ProcedureCode_encode_jer;
oer_type_decoder_f Ngap_ProcedureCode_decode_oer;
oer_type_encoder_f Ngap_ProcedureCode_encode_oer;
per_type_decoder_f Ngap_ProcedureCode_decode_uper;
per_type_encoder_f Ngap_ProcedureCode_encode_uper;
per_type_decoder_f Ngap_ProcedureCode_decode_aper;
per_type_encoder_f Ngap_ProcedureCode_encode_aper;
#define Ngap_ProcedureCode_id_AMFConfigurationUpdate	((Ngap_ProcedureCode_t)0)
#define Ngap_ProcedureCode_id_AMFStatusIndication	((Ngap_ProcedureCode_t)1)
#define Ngap_ProcedureCode_id_CellTrafficTrace	((Ngap_ProcedureCode_t)2)
#define Ngap_ProcedureCode_id_DeactivateTrace	((Ngap_ProcedureCode_t)3)
#define Ngap_ProcedureCode_id_DownlinkNASTransport	((Ngap_ProcedureCode_t)4)
#define Ngap_ProcedureCode_id_DownlinkNonUEAssociatedNRPPaTransport	((Ngap_ProcedureCode_t)5)
#define Ngap_ProcedureCode_id_DownlinkRANConfigurationTransfer	((Ngap_ProcedureCode_t)6)
#define Ngap_ProcedureCode_id_DownlinkRANStatusTransfer	((Ngap_ProcedureCode_t)7)
#define Ngap_ProcedureCode_id_DownlinkUEAssociatedNRPPaTransport	((Ngap_ProcedureCode_t)8)
#define Ngap_ProcedureCode_id_ErrorIndication	((Ngap_ProcedureCode_t)9)
#define Ngap_ProcedureCode_id_HandoverCancel	((Ngap_ProcedureCode_t)10)
#define Ngap_ProcedureCode_id_HandoverNotification	((Ngap_ProcedureCode_t)11)
#define Ngap_ProcedureCode_id_HandoverPreparation	((Ngap_ProcedureCode_t)12)
#define Ngap_ProcedureCode_id_HandoverResourceAllocation	((Ngap_ProcedureCode_t)13)
#define Ngap_ProcedureCode_id_InitialContextSetup	((Ngap_ProcedureCode_t)14)
#define Ngap_ProcedureCode_id_InitialUEMessage	((Ngap_ProcedureCode_t)15)
#define Ngap_ProcedureCode_id_LocationReportingControl	((Ngap_ProcedureCode_t)16)
#define Ngap_ProcedureCode_id_LocationReportingFailureIndication	((Ngap_ProcedureCode_t)17)
#define Ngap_ProcedureCode_id_LocationReport	((Ngap_ProcedureCode_t)18)
#define Ngap_ProcedureCode_id_NASNonDeliveryIndication	((Ngap_ProcedureCode_t)19)
#define Ngap_ProcedureCode_id_NGReset	((Ngap_ProcedureCode_t)20)
#define Ngap_ProcedureCode_id_NGSetup	((Ngap_ProcedureCode_t)21)
#define Ngap_ProcedureCode_id_OverloadStart	((Ngap_ProcedureCode_t)22)
#define Ngap_ProcedureCode_id_OverloadStop	((Ngap_ProcedureCode_t)23)
#define Ngap_ProcedureCode_id_Paging	((Ngap_ProcedureCode_t)24)
#define Ngap_ProcedureCode_id_PathSwitchRequest	((Ngap_ProcedureCode_t)25)
#define Ngap_ProcedureCode_id_PDUSessionResourceModify	((Ngap_ProcedureCode_t)26)
#define Ngap_ProcedureCode_id_PDUSessionResourceModifyIndication	((Ngap_ProcedureCode_t)27)
#define Ngap_ProcedureCode_id_PDUSessionResourceRelease	((Ngap_ProcedureCode_t)28)
#define Ngap_ProcedureCode_id_PDUSessionResourceSetup	((Ngap_ProcedureCode_t)29)
#define Ngap_ProcedureCode_id_PDUSessionResourceNotify	((Ngap_ProcedureCode_t)30)
#define Ngap_ProcedureCode_id_PrivateMessage	((Ngap_ProcedureCode_t)31)
#define Ngap_ProcedureCode_id_PWSCancel	((Ngap_ProcedureCode_t)32)
#define Ngap_ProcedureCode_id_PWSFailureIndication	((Ngap_ProcedureCode_t)33)
#define Ngap_ProcedureCode_id_PWSRestartIndication	((Ngap_ProcedureCode_t)34)
#define Ngap_ProcedureCode_id_RANConfigurationUpdate	((Ngap_ProcedureCode_t)35)
#define Ngap_ProcedureCode_id_RerouteNASRequest	((Ngap_ProcedureCode_t)36)
#define Ngap_ProcedureCode_id_RRCInactiveTransitionReport	((Ngap_ProcedureCode_t)37)
#define Ngap_ProcedureCode_id_TraceFailureIndication	((Ngap_ProcedureCode_t)38)
#define Ngap_ProcedureCode_id_TraceStart	((Ngap_ProcedureCode_t)39)
#define Ngap_ProcedureCode_id_UEContextModification	((Ngap_ProcedureCode_t)40)
#define Ngap_ProcedureCode_id_UEContextRelease	((Ngap_ProcedureCode_t)41)
#define Ngap_ProcedureCode_id_UEContextReleaseRequest	((Ngap_ProcedureCode_t)42)
#define Ngap_ProcedureCode_id_UERadioCapabilityCheck	((Ngap_ProcedureCode_t)43)
#define Ngap_ProcedureCode_id_UERadioCapabilityInfoIndication	((Ngap_ProcedureCode_t)44)
#define Ngap_ProcedureCode_id_UETNLABindingRelease	((Ngap_ProcedureCode_t)45)
#define Ngap_ProcedureCode_id_UplinkNASTransport	((Ngap_ProcedureCode_t)46)
#define Ngap_ProcedureCode_id_UplinkNonUEAssociatedNRPPaTransport	((Ngap_ProcedureCode_t)47)
#define Ngap_ProcedureCode_id_UplinkRANConfigurationTransfer	((Ngap_ProcedureCode_t)48)
#define Ngap_ProcedureCode_id_UplinkRANStatusTransfer	((Ngap_ProcedureCode_t)49)
#define Ngap_ProcedureCode_id_UplinkUEAssociatedNRPPaTransport	((Ngap_ProcedureCode_t)50)
#define Ngap_ProcedureCode_id_WriteReplaceWarning	((Ngap_ProcedureCode_t)51)
#define Ngap_ProcedureCode_id_SecondaryRATDataUsageReport	((Ngap_ProcedureCode_t)52)
#define Ngap_ProcedureCode_id_UplinkRIMInformationTransfer	((Ngap_ProcedureCode_t)53)
#define Ngap_ProcedureCode_id_DownlinkRIMInformationTransfer	((Ngap_ProcedureCode_t)54)

#ifdef __cplusplus
}
#endif

#endif	/* _Ngap_ProcedureCode_H_ */
#include <asn_internal.h>
