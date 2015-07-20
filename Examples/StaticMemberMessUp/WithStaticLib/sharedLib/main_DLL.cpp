#include <iostream>
#include "counter.h"

extern "C"
{
    Counter main_DLL()	
    {
        Counter count;
        count.initPtr();
        long ptr = (long)count.ptr;
        std::cout << "main_DLL : ptr = " << ptr << " value = " << *count.ptr << std::endl;
        *count.ptr = 5;
        int x = 5;
        if (x > 5)
            return count;
        return count;
    }
}

void dummy()
{
    main_DLL();
}
