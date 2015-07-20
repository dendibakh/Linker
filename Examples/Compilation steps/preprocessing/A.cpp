// A.cpp

#define UNUSED_VAR(x) (void)x

void A()
{
    int a;
    UNUSED_VAR(a);
}

/*
$ g++ -E -P A.cpp
	
void A()
{
    int a;
    (void)a;
}
*/