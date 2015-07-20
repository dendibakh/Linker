#include "../counter.h"

extern "C"
{ 
    void main_DLL();
}

void dummy()
{
    main_DLL();
}
