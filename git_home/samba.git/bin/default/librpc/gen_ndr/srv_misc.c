/*
 * Unix SMB/CIFS implementation.
 * server auto-generated by pidl. DO NOT MODIFY!
 */

#include "includes.h"
#include "ntdomain.h"
#include "bin/default/librpc/gen_ndr/srv_misc.h"


/* Tables */
static const struct api_struct api_misc_cmds[] = 
{
};

const struct api_struct *misc_get_pipe_fns(int *n_fns)
{
	*n_fns = sizeof(api_misc_cmds) / sizeof(struct api_struct);
	return api_misc_cmds;
}

NTSTATUS rpc_misc_init(const struct rpc_srv_callbacks *rpc_srv_cb)
{
	return rpc_srv_register(SMB_RPC_INTERFACE_VERSION, "misc", "misc", &ndr_table_misc, api_misc_cmds, sizeof(api_misc_cmds) / sizeof(struct api_struct), rpc_srv_cb);
}

NTSTATUS rpc_misc_shutdown(void)
{
	return rpc_srv_unregister(&ndr_table_misc);
}
