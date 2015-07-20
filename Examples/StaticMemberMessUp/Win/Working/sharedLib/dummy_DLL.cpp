#define EXPORT_IMPORT __declspec(dllexport)
#include "counter.h"

__declspec(dllexport) void main_DLL();

void dummy()
{
    main_DLL();
}
