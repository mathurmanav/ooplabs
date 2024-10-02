#include <iostream>
using namespace std;

class IncNum {
private:
    int value;

public:
    IncNum(int v = 0) : value(v) {}

    friend IncNum& operator++(IncNum&);

    void display() const {
        cout << "Value: " << value << endl;
    }
};

IncNum& operator++(IncNum& obj) {
    ++obj.value; 
    return obj;
}

int main() {
    IncNum num(10); 
    cout << "Before increment: ";
    num.display();

    ++num;  

    cout << "After increment: ";
    num.display();

    return 0;
}
