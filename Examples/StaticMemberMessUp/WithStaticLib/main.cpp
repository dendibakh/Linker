#include "counter.h"
#include <iostream>

extern "C"
{
    Counter main_DLL();
}

int main()
{
    Counter c = main_DLL();
    long ptr = (long)c.ptr;
    std::cout << "main_EXE : ptr = " << ptr << " value = " << *c.ptr << std::endl;
    
    //main_DLL();
}
