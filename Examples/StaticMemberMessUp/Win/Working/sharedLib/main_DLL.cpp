#include <iostream>
#define EXPORT_IMPORT __declspec(dllexport)
#include "counter.h"

EXPORT_IMPORT void main_DLL()   
{
    Counter c;
    std::cout << "main_DLL : ptr = " << &c.getCount() << " value = " << c.getCount() << std::endl;
}
