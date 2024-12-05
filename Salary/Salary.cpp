#include <iostream>
using namespace std;
class Employee{
    private:
    int salary;
    public:
    void SetSalary(int s){
        salary=s;
    }
    int getSalary(){
        return(salary);
    }
};
int main(){
    Employee myobj;
    myobj.SetSalary(120000);
    cout<<myobj.getSalary()<<endl;
    return 0;
}