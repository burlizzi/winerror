#include <Dbghelp.h>
LONG CALLBACK unhandled_handler(EXCEPTION_POINTERS* e)
{
    make_minidump(e);
    return EXCEPTION_CONTINUE_SEARCH;
}

int main()
{
    SetUnhandledExceptionFilter(unhandled_handler);

    return *(int*)0;
}
