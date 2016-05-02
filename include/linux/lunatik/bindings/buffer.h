#ifndef __LUNATIK_BINDINGS_BUFFER
#define __LUNATIK_BINDINGS_BUFFER

#include <linux/lunatik.h>

#define LF(name) int lunatik_##name(lua_State *L)
LF(buf_length);
LF(buf_call);
LF(buf_new);
#undef LF

extern int lunatik_buf_register(struct lunatik_context *lc);

#endif /* __LUNATIK_BINDINGS_BUFFER */
