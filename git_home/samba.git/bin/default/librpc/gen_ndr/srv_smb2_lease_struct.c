/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "bin/default/librpc/gen_ndr/srv_smb2_lease_struct.h"


/* Tables */
static const struct api_struct api_smb2_lease_struct_cmds[] = 
{
};

const struct api_struct *smb2_lease_struct_get_pipe_fns(int *n_fns)
{
	*n_fns = sizeof(api_smb2_lease_struct_cmds) / sizeof(struct api_struct);
	return api_smb2_lease_struct_cmds;
}

NTSTATUS rpc_smb2_lease_struct_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "smb2_lease_struct", "smb2_lease_struct", &ndr_table_smb2_lease_struct, api_smb2_lease_struct_cmds, sizeof(api_smb2_lease_struct_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_smb2_lease_struct_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_smb2_lease_struct);
}
