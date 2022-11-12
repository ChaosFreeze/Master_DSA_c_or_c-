#include <iostream>

void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(int argc, char const *argv[])
{
    int x=10, y=5;
    swap_by_value(x, y);
    return 0;
}

