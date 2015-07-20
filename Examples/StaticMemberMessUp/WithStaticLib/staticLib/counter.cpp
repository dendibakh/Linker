#include "counter.h"

void Counter::initPtr() 
{ 
    static int counter[] = { 0 , 1 , 2, 3 };
    ptr = counter;
}

/*
int* Counter::getCount()
{
    
    return counter;
}
*/
