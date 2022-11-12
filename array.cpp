#include<iostream>

using namespace std;

int main() {
    int A[10] = {1, 2, 3, 4, 5};

    // c style coding can be used
    // if not working use -> #include<stdio.h>
    printf("%d\n", A[1]);
    
    cout << "for loop in c++" << endl;
    for(int i = 0; i<10; i++) {
        cout << A[i] << endl;
    }

    cout << "for each loop in c++" << endl;
    for (int x: A) {
        cout << x << endl;
    }
    return 0;
}