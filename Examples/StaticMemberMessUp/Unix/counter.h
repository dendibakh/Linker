#pragma once

struct Counter
{
    Counter()
    { 
        ++getCount();
    }

    static int& getCount()
    {
        static int counter = 1234;
        return counter;
    }
};
