#include "librpc/gen_ndr/ndr_netlogon.h"
#ifndef __SRV_NETLOGON__
#define __SRV_NETLOGON__
WERROR _netr_LogonUasLogon(struct pipes_struct *p, struct netr_LogonUasLogon *r);
WERROR _netr_LogonUasLogoff(struct pipes_struct *p, struct netr_LogonUasLogoff *r);
NTSTATUS _netr_LogonSamLogon(struct pipes_struct *p, struct netr_LogonSamLogon *r);
NTSTATUS _netr_LogonSamLogoff(struct pipes_struct *p, struct netr_LogonSamLogoff *r);
NTSTATUS _netr_ServerReqChallenge(struct pipes_struct *p, struct netr_ServerReqChallenge *r);
NTSTATUS _netr_ServerAuthenticate(struct pipes_struct *p, struct netr_ServerAuthenticate *r);
NTSTATUS _netr_ServerPasswordSet(struct pipes_struct *p, struct netr_ServerPasswordSet *r);
NTSTATUS _netr_DatabaseDeltas(struct pipes_struct *p, struct netr_DatabaseDeltas *r);
NTSTATUS _netr_DatabaseSync(struct pipes_struct *p, struct netr_DatabaseSync *r);
NTSTATUS _netr_AccountDeltas(struct pipes_struct *p, struct netr_AccountDeltas *r);
NTSTATUS _netr_AccountSync(struct pipes_struct *p, struct netr_AccountSync *r);
WERROR _netr_GetDcName(struct pipes_struct *p, struct netr_GetDcName *r);
WERROR _netr_LogonControl(struct pipes_struct *p, struct netr_LogonControl *r);
WERROR _netr_GetAnyDCName(struct pipes_struct *p, struct netr_GetAnyDCName *r);
WERROR _netr_LogonControl2(struct pipes_struct *p, struct netr_LogonControl2 *r);
NTSTATUS _netr_ServerAuthenticate2(struct pipes_struct *p, struct netr_ServerAuthenticate2 *r);
NTSTATUS _netr_DatabaseSync2(struct pipes_struct *p, struct netr_DatabaseSync2 *r);
NTSTATUS _netr_DatabaseRedo(struct pipes_struct *p, struct netr_DatabaseRedo *r);
WERROR _netr_LogonControl2Ex(struct pipes_struct *p, struct netr_LogonControl2Ex *r);
NTSTATUS _netr_NetrEnumerateTrustedDomains(struct pipes_struct *p, struct netr_NetrEnumerateTrustedDomains *r);
WERROR _netr_DsRGetDCName(struct pipes_struct *p, struct netr_DsRGetDCName *r);
NTSTATUS _netr_LogonGetCapabilities(struct pipes_struct *p, struct netr_LogonGetCapabilities *r);
WERROR _netr_NETRLOGONSETSERVICEBITS(struct pipes_struct *p, struct netr_NETRLOGONSETSERVICEBITS *r);
WERROR _netr_LogonGetTrustRid(struct pipes_struct *p, struct netr_LogonGetTrustRid *r);
WERROR _netr_NETRLOGONCOMPUTESERVERDIGEST(struct pipes_struct *p, struct netr_NETRLOGONCOMPUTESERVERDIGEST *r);
WERROR _netr_NETRLOGONCOMPUTECLIENTDIGEST(struct pipes_struct *p, struct netr_NETRLOGONCOMPUTECLIENTDIGEST *r);
NTSTATUS _netr_ServerAuthenticate3(struct pipes_struct *p, struct netr_ServerAuthenticate3 *r);
WERROR _netr_DsRGetDCNameEx(struct pipes_struct *p, struct netr_DsRGetDCNameEx *r);
WERROR _netr_DsRGetSiteName(struct pipes_struct *p, struct netr_DsRGetSiteName *r);
NTSTATUS _netr_LogonGetDomainInfo(struct pipes_struct *p, struct netr_LogonGetDomainInfo *r);
NTSTATUS _netr_ServerPasswordSet2(struct pipes_struct *p, struct netr_ServerPasswordSet2 *r);
WERROR _netr_ServerPasswordGet(struct pipes_struct *p, struct netr_ServerPasswordGet *r);
WERROR _netr_NETRLOGONSENDTOSAM(struct pipes_struct *p, struct netr_NETRLOGONSENDTOSAM *r);
WERROR _netr_DsRAddressToSitenamesW(struct pipes_struct *p, struct netr_DsRAddressToSitenamesW *r);
WERROR _netr_DsRGetDCNameEx2(struct pipes_struct *p, struct netr_DsRGetDCNameEx2 *r);
WERROR _netr_NETRLOGONGETTIMESERVICEPARENTDOMAIN(struct pipes_struct *p, struct netr_NETRLOGONGETTIMESERVICEPARENTDOMAIN *r);
WERROR _netr_NetrEnumerateTrustedDomainsEx(struct pipes_struct *p, struct netr_NetrEnumerateTrustedDomainsEx *r);
WERROR _netr_DsRAddressToSitenamesExW(struct pipes_struct *p, struct netr_DsRAddressToSitenamesExW *r);
WERROR _netr_DsrGetDcSiteCoverageW(struct pipes_struct *p, struct netr_DsrGetDcSiteCoverageW *r);
NTSTATUS _netr_LogonSamLogonEx(struct pipes_struct *p, struct netr_LogonSamLogonEx *r);
WERROR _netr_DsrEnumerateDomainTrusts(struct pipes_struct *p, struct netr_DsrEnumerateDomainTrusts *r);
WERROR _netr_DsrDeregisterDNSHostRecords(struct pipes_struct *p, struct netr_DsrDeregisterDNSHostRecords *r);
NTSTATUS _netr_ServerTrustPasswordsGet(struct pipes_struct *p, struct netr_ServerTrustPasswordsGet *r);
WERROR _netr_DsRGetForestTrustInformation(struct pipes_struct *p, struct netr_DsRGetForestTrustInformation *r);
NTSTATUS _netr_GetForestTrustInformation(struct pipes_struct *p, struct netr_GetForestTrustInformation *r);
NTSTATUS _netr_LogonSamLogonWithFlags(struct pipes_struct *p, struct netr_LogonSamLogonWithFlags *r);
NTSTATUS _netr_ServerGetTrustInfo(struct pipes_struct *p, struct netr_ServerGetTrustInfo *r);
NTSTATUS _netr_Unused47(struct pipes_struct *p, struct netr_Unused47 *r);
NTSTATUS _netr_DsrUpdateReadOnlyServerDnsRecords(struct pipes_struct *p, struct netr_DsrUpdateReadOnlyServerDnsRecords *r);
void netlogon_get_pipe_fns(struct api_struct **fns, int *n_fns);
struct rpc_srv_callbacks;
NTSTATUS rpc_netlogon_init(const struct rpc_srv_callbacks *rpc_srv_cb);
NTSTATUS rpc_netlogon_shutdown(void);
#endif /* __SRV_NETLOGON__ */
