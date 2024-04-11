#ifndef BAR_HPP
#define BAR_HPP

namespace test
{

class Bar
{
public:
    Bar(int x);
    void print() const;
private:
    int m_x;
};

}

#endif