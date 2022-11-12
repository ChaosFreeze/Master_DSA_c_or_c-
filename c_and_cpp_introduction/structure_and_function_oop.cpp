#include <iostream>
#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
    
    void initialize(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }

    int perimeter() {
        int p = 0;
        p = 2 * (length + breadth);
        return p;
    }
};


int main(int argc, char const *argv[])
{
    Rectangle r={0, 0};

    int l=0, b=0;
    printf("Enter Length and Breadth: ");
    std::cin >> l >> b;

    r.initialize(l, b);

    int a = r.area();
    int peri = r.perimeter();

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}