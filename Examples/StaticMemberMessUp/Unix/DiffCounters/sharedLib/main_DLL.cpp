#include <iostream>
#define Counter CounterDLL
#include "../counter.h"

int Counter::counter = 0;

extern "C"
{
    void main_DLL()   
    {
        Counter c;
        std::cout << "main_DLL : ptr = " << &Counter::counter << " value = " << Counter::counter << std::endl;
    }
}
