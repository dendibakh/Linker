#include <iostream>
#define EXPORT_IMPORT __declspec(dllimport)
#include "counter.h"

EXPORT_IMPORT void main_DLL();

int main()
{
    main_DLL();
    Counter c;
    std::cout << "main_EXE : ptr = " << &c.getCount() << " value = " << c.getCount() << std::endl;
}
