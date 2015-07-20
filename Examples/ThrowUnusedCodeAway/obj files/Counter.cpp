#include "Counter.h"

unsigned int Counter::count = 0;

Counter::Counter() 
{ 
    ++count; 
}
