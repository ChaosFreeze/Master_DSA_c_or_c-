#include <iostream>

class Rectangle {
    private:
        int length;
        int breadth;

    public:
        // constructor overloading
        // default constructor
        Rectangle() {
            length = 0;
            breadth = 0;
        }
        // parameterized constructor
        Rectangle(int l, int b) {
            length = l;
            breadth = b;
        }
        int area() {
            return length*breadth;
        }
        int perimeter() {
            return 2*(length+breadth);
        }
        void setLength(int l) {
            length = l;
        }
        void setBreadth(int b) {
            breadth = b;
        }
        int getLength() {
            return length;
        }
        int getBreadth() {
            return breadth;
        }
        ~Rectangle() {
            std::cout << "This is a destructor with nothing to destroy" << std::endl;
        }
};

int main() {
    Rectangle r(10, 5);

    std::cout << "Area is "<< r.area() << std::endl;
    std::cout << "Perimeter is "<< r.perimeter() << std::endl;
    return 0;
}