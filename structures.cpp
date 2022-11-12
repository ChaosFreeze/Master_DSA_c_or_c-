#include <iostream>

struct Rectangle {
    int length;
    int breadth;
    char x;
};

int main() {
    struct Rectangle r = {10, 5};
    // size should be 9 but takes 12 due to 'padding' of memory in structure
    std::cout << "Size of Rectangle :" << sizeof(r) << std::endl;
    std::cout << r.length << std::endl;
    std::cout << r.breadth << std::endl;

    return 0;
}