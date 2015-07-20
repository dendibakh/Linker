#include <stdio.h>
struct S
{
   void foo() { printf("B.cpp\n"); }
};

void fooB() 
{
    S s;
    s.foo();
}
