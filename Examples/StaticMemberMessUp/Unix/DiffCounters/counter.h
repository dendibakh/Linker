#pragma once

struct Counter
{
    Counter()
    { 
        ++counter;
    }

    static int counter;
};
