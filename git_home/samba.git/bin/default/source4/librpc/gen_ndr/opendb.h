/* header auto-generated by pidl */

#ifndef _PIDL_HEADER_opendb
#define _PIDL_HEADER_opendb

#include <stdint.h>

#include "libcli/util/ntstatus.h"

#include "librpc/gen_ndr/server_id.h"
#ifndef _HEADER_opendb
#define _HEADER_opendb

struct opendb_entry {
	struct server_id server;
	uint32_t stream_id;
	uint32_t share_access;
	uint32_t access_mask;
	void* file_handle;
	void* fd;
	uint8_t delete_on_close;
	uint8_t allow_level_II_oplock;
	uint32_t oplock_level;
};

struct opendb_pending {
	struct server_id server;
	void* notify_ptr;
};

struct opendb_file {
	uint8_t delete_on_close;
	NTTIME open_write_time;
	NTTIME changed_write_time;
	const char * path;/* [flag(LIBNDR_FLAG_STR_UTF8|LIBNDR_FLAG_STR_NULLTERM)] */
	uint32_t num_entries;
	struct opendb_entry *entries;
	uint32_t num_pending;
	struct opendb_pending *pending;
}/* [public] */;

#endif /* _HEADER_opendb */
#endif /* _PIDL_HEADER_opendb */
