#ifndef __LUNATIK_BINDINGS_PRINTK
#define __LUNATIK_BINDINGS_PRINTK

#include <linux/lunatik.h>

int lunatik_printk(lua_State *L);

extern int lunatik_printk_register(struct lunatik_context *lc);

#endif /* __LUNATIK_BINDINGS_PRINTK */
