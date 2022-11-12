// This is also known as Procedural Programming

#include <iostream>
#include <stdio.h>

int area(int length, int breadth) {
    return length * breadth;
}

int perimeter(int length, int breadth) {
    int p = 0;
    p = 2 * (length + breadth);
    return p;
}

int main(int argc, char const *argv[])
{
    int length=0, breadth=0;

    printf("Enter Length and Breadth: ");
    cin >> length >> breadth;

    int a = area(length, breadth);
    int peri = perimeter(length, breadth);

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}
