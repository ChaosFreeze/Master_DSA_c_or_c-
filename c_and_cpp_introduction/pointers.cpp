#include <iostream>

int main() {
    int *p;
    p = new int[5];
    p[0]=1;
    p[1]=2;
    p[3]=3;
    for (int i=0; i<5; i++) {
        std::cout << p[i] << std::endl;
    }
    delete []p;
    return 0;
}