#include <iostream>
class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle() : length(0), width(0) {}
    Rectangle(int l) : length(l), width(0) {}
    Rectangle(int l, int w) : length(l), width(w) {}
    Rectangle(const Rectangle& other) : length(other.length), width(other.width) {} // copy constructor
    int getSquare() {
        return length * length;
    }
    int getRectArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect1;
    std::cout << "Area of rect1: " << rect1.getRectArea() << std::endl;
    Rectangle rect2(4); 
    std::cout << "Area of rect2: " << rect2.getRectArea() << std::endl;
    Rectangle rect3(4, 6); 
    std::cout << "Area of rect3: " << rect3.getRectArea() << std::endl;
    std::cout << "Square of length of rect3: " << rect3.getSquare() << std::endl;
    // Create a copy of rect3 using the copy constructor
    Rectangle rect4(rect3);
    std::cout << "Area of rect4: " << rect4.getRectArea() << std::endl;
    std::cout << "Square of length of rect4: " << rect4.getSquare() << std::endl;
    return 0;
}