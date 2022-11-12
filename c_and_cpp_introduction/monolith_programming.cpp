#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int length=0, breadth=0;

    printf("Enter Length and Breadth: ");
    std::cin >> length >> breadth;

    int area = length + breadth;
    int peri = 2 * (length + breadth);

    printf("Area=%d\nPerimeter=%d\n", area, peri);
    return 0;
}
