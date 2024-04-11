#include <iostream>

void foo()
{
    for(size_t i = 1; i <= 5; ++i)
    {
        std::cout << "Foo " << i << std::endl;
    }
}


int main()
{
    std::cout << "Hello world!" << std::endl;
    foo();
}