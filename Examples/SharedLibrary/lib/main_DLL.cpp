void A();
void B();

extern "C"
{
    int main_DLL()	
    {
        A();
        B();
        return 0;
    }
}
