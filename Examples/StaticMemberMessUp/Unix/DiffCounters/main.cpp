#include "counter.h"
#include <iostream>

int Counter::counter = 0;

extern "C"
{
    void main_DLL();
}

int main()
{
    main_DLL();
    Counter c;
    std::cout << "main_EXE : ptr = " << &Counter::counter << " value = " << Counter::counter << std::endl;
}
