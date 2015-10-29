#include <iostream>
#include "counter.h"

void main_DLL();

int counter = 0;

int main()
{
    main_DLL();
    ++counter;
    std::cout << "main_EXE : ptr = " << &counter << " value = " << counter << std::endl;
}
