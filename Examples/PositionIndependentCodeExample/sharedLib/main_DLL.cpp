#include <iostream>
#include "../counter.h"

void main_DLL()   
{
    ++counter;
    std::cout << "main_DLL : ptr = " << &counter << " value = " << counter << std::endl;
}
