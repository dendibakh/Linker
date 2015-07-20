#include <iostream>
#include "../counter.h"

__declspec(dllexport) void main_DLL()   
{
    Counter c;
    std::cout << "main_DLL : ptr = " << &Counter::getCount() << " value = " << Counter::getCount() << std::endl;
}
