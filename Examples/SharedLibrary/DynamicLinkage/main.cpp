#include "dlfcn.h"

typedef void (*funPtr)(void);
int main()
{
    void *handle = dlopen("libsharedLib.so",RTLD_LAZY);
    funPtr fun = (funPtr)dlsym(handle,"main_DLL");
    (*fun)();
    dlclose(handle);
    
}     