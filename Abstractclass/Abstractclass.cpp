#include <iostream>
using namespace std;
class Shape
{
protected:
    int shape_length;
    int shape_width;

public:
    void setlength(int l)
    {
        shape_length = l;
    }
    void setwidth(int w)
    {
        shape_width = w;
    }
    int getlength()
    {
        return shape_length;
    }
    int getwidth()
    {
        return shape_width;
    }
    virtual int getPerimeter() = 0;
};
class Square : public Shape
{
public:
    int getPerimeter()
    {
        return 4 * getwidth();
    }
    friend int circlePerimeter(Square);
};
int circlePerimeter(Square s)
{
    return 2 * 3.14 * s.getwidth();
}
class Rectangle : public Shape
{
public:
    int getPerimeter()
    {
        return 2 * (getlength() + getwidth());
    }
};
int main(){
    Rectangle r;
    Square s;
    r.setlength(10);
    r.setwidth(10);
    s.setwidth(10);
    cout<<"Perimeter of Rectangle "<<r.getPerimeter()<<endl;
    cout<<"Perimeter of Square "<<s.getPerimeter()<<endl;
    cout<<"Perimeter of circle using friend class "<<circlePerimeter(s)<<endl;
    return 0;
}