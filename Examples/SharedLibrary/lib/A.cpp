#include <iostream>

static int a = 1234;

void A()
{
    int b = a;
    (void)b;
    std::cout << "this is A" << std::endl;
}
