#include <iostream>
#define Counter CounterDLL
#include "../counter.h"

extern "C"
{
    void main_DLL()   
    {
        Counter c;
        std::cout << "main_DLL : ptr = " << &Counter::getCount() << " value = " << Counter::getCount() << std::endl;
    }
}
