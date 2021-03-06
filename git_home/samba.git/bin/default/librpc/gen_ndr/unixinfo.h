/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_unixinfo
#define _PIDL_HEADER_unixinfo

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/security.h"
#ifndef _HEADER_unixinfo
#define _HEADER_unixinfo

struct unixinfo_GetPWUidInfo {
	NTSTATUS status;
	const char *homedir;/* [charset(UTF8)] */
	const char *shell;/* [charset(UTF8)] */
};


struct unixinfo_SidToUid {
	struct {
		struct dom_sid sid;
	} in;

	struct {
		uint64_t *uid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct unixinfo_UidToSid {
	struct {
		uint64_t uid;
	} in;

	struct {
		struct dom_sid *sid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct unixinfo_SidToGid {
	struct {
		struct dom_sid sid;
	} in;

	struct {
		uint64_t *gid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct unixinfo_GidToSid {
	struct {
		uint64_t gid;
	} in;

	struct {
		struct dom_sid *sid;/* [ref] */
		NTSTATUS result;
	} out;

};


struct unixinfo_GetPWUid {
	struct {
		uint64_t *uids;/* [size_is(*count)] */
		uint32_t *count;/* [range(0,1023),ref] */
	} in;

	struct {
		struct unixinfo_GetPWUidInfo *infos;/* [size_is(*count)] */
		uint32_t *count;/* [range(0,1023),ref] */
		NTSTATUS result;
	} out;

};

#endif /* _HEADER_unixinfo */
#endif /* _PIDL_HEADER_unixinfo */
