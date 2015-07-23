#pragma once

struct Counter
{
    Counter()
    { 
        ++getCount();
    }

    static int& getCount()
    {
        static int counter = 0;
        return counter;
    }
};
