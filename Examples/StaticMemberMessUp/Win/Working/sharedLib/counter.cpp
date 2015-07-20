#define EXPORT_IMPORT __declspec(dllexport)
#include "counter.h"

Counter::Counter() 
{ 
    ++getCount();
}

int& Counter::getCount()
{
    static int counter = 0;
    return counter;
}
