#include "bar.hpp"

#include <iostream>

namespace test
{
    
Bar::Bar(int x):
    m_x(x)
{
}

void Bar::print() const
{
    std::cout << "Bar: " << x << std::endl;
}

}