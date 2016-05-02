#ifndef __LUNATIK_BINDINGS_CRYPTO
#define __LUNATIK_BINDINGS_CRYPTO

#include <linux/lunatik.h>

#define LF(name) int lunatik_##name(lua_State *L)
LF(sha1);
LF(get_random_bytes);
#undef LF

extern int lunatik_crypto_register(struct lunatik_context *lc);

#endif /* __LUNATIK_BINDINGS_CRYPTO */
