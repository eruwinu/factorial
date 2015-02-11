#pragma once

namespace runtime
{
    namespace iterative
    {
        unsigned long factorial(int n);
    }

    namespace functional
    {
        unsigned long factorial(int n);
    }

    namespace stl_algo
    {
        unsigned long factorial(int n);
    }
}

namespace compiletime
{
    unsigned long factorial(int n);
}
