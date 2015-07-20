#include "counter.h"
#include <iostream>

__declspec(dllimport) 
void main_DLL();

int main()
{
    main_DLL();
    Counter c;
    std::cout << "main_EXE : ptr = " << &Counter::getCount() << " value = " << Counter::getCount() << std::endl;
}
