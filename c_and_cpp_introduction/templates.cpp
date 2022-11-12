#include <iostream>

template<class T>
class Arithmetic
{
private:
    /* data */
    T a;
    T b;
public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::add() {
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithmetic<T>::sub() {
    T c;
    c = a-b;
    return c;
}

int main(int argc, char const *argv[])
{
    Arithmetic<int> ar(10, 5);

    std::cout<<"Add = "<<ar.add()<<std::endl;
    std::cout<<"Sub = "<<ar.sub()<<std::endl;
    return 0;
}
