#include <iostream>

extern "C"
{
    void main_DLL()	
    {
        std::cout << "this is main_Dll() from shared library" << std::endl;
    }
}
