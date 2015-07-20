#include <stdio.h>
struct S
{
   void foo() { printf("A.cpp\n"); }
};

void fooA() 
{
    S s;
    s.foo();
}

