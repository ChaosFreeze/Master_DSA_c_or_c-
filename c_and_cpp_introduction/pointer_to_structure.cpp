#include <iostream>

struct Rectangle
{
    int length;
    int breadth;
};

int main(int argc, char const *argv[])
{
    Rectangle *p;
    p = new Rectangle;
    p->length = 15;
    p->breadth = 7;

    std::cout << p->length << std::endl;
    std::cout << p->breadth << std::endl;

    delete p;
    return 0;
}

