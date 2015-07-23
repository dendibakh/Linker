#include "counter.h"
#include <iostream>

extern "C"
{
    void main_DLL();
}

int main()
{
    main_DLL();
    Counter c;
    std::cout << "main_EXE : ptr = " << &Counter::getCount() << " value = " << Counter::getCount() << std::endl;
    main_DLL();
}
