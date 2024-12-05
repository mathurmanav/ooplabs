#include <iostream>
using namespace std;
template <class T>
class Test {
private:
    T ans;
public:
    Test(T n) : ans(n) {
        cout << "Inside constructor" << endl;
    }
    T getNumber() {
        return ans;
    }
};
int main() {
    Test<int> numInt(50);
    Test<double> numDouble(12.5);
    cout << "Integer number: " << numInt.getNumber() << endl;
    cout << "Double number: " << numDouble.getNumber() << endl;
    return 0;
}