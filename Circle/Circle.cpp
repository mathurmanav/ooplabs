#include<iostream>
using namespace std;
class Circle {
    private:
        float radius;
        const float PI = 3.14;
        static int count;
    public:
        Circle() {
            radius = 0.0;
            count++;
        }
        Circle(float r) {
            radius = r;
            count++;
        }
        float circleArea () const{
            return PI * radius * radius;
            count++;
        }
        float circCircumference () const{
            return 2 * PI * radius;
        }
        static int counter() {
            return count;
        }
};
int Circle::count = 0;
int main() {
    Circle c1;
    Circle c2(3.0);
    cout << "Area of circle c1: " << c1.circleArea() << endl;
    cout << "Circumference of circle c1: " << c1.circCircumference() << endl;

    cout << "Area of circle c2: " << c2.circleArea() << endl;
    cout << "Circumference of circle c2: " << c2.circCircumference() << endl;

    cout << "Number of circle objects created: " << Circle::counter() << endl;
    return 0;
}