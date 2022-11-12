#include <iostream>
#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b) {
    r->length = l;
    r->breadth = b;
}

int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int perimeter(Rectangle r) {
    int p = 0;
    p = 2 * (r.length + r.breadth);
    return p;
}

int main(int argc, char const *argv[])
{
    Rectangle r={0, 0};

    int l=0, b=0;
    printf("Enter Length and Breadth: ");
    cin >> l >> b;

    initialize(&r, l, b);

    int a = area(r);
    int peri = perimeter(r);

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}