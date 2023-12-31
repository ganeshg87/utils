/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "SonTransfer-IEs"
 * 	found in "/home/vagrant/magma/lte/gateway/c/core/oai/tasks/s1ap/messages/asn1/r15/s1ap-15.6.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -no-gen-example -fno-include-deps -D /home/vagrant/build/c/core/oai/tasks/s1ap/r15`
 */

#ifndef	_S1ap_HOReport_H_
#define	_S1ap_HOReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap_HoType.h"
#include "S1ap_HoReportType.h"
#include "S1ap_IRAT-Cell-ID.h"
#include "S1ap_CandidateCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_CandidatePCIList;

/* S1ap_HOReport */
typedef struct S1ap_HOReport {
	S1ap_HoType_t	 hoType;
	S1ap_HoReportType_t	 hoReportType;
	S1ap_IRAT_Cell_ID_t	 hosourceID;
	S1ap_IRAT_Cell_ID_t	 hoTargetID;
	S1ap_CandidateCellList_t	 candidateCellList;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct S1ap_CandidatePCIList	*candidatePCIList;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_HOReport_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_HOReport;
extern asn_SEQUENCE_specifics_t asn_SPC_S1ap_HOReport_specs_1;
extern asn_TYPE_member_t asn_MBR_S1ap_HOReport_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_HOReport_H_ */
#include <asn_internal.h>
