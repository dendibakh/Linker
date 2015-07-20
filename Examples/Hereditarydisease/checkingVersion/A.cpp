#include <stdio.h>

struct DENDI
{
   void foo() { printf("A.cpp\n"); }
};

struct S
{
   void foo() { printf("A.cpp\n"); }
};

void foobar2()
{
    S s;
    s.foo();
}

void foobar()
{
    DENDI s;
    s.foo();
}

void fooA() 
{
    S s;
    s.foo();
}

