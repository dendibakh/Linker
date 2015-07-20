static int statInt = 1234;
static double statDNotInit;
char globChar;

void A()
{
    int localInt = 0;
    (void) statInt;
    statInt = localInt;
    (void) statDNotInit;
    double localD = statDNotInit;
    (void) localD;
    (void) globChar;
}
