#include "cengine.hpp"

extern "C"
{
    int common_test(lua_State *L)
    {
        printf("this is a test\n");
        return 0;
    }
}

static const struct luaL_Reg common_f[] = {
    { "Test", common_test },
    { NULL, NULL },
};

int luaopen_common(lua_State *L)
{
    luaL_newlib(L, common_f);
    return 1;
}
