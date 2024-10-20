//program for multiLevel Inheritance
#include<iostream>
using namespace std;
class Person{
    char name[30];
    public:
    void read(){
    cout<<"Enter the name: ";
    cin>>name;
    }
    void display(){
        cout<<"Name:"<<name<<endl;
    }
};
class sport:public Person{
    int m=50;
    public:
    void display(){
        cout<<m;
    }
};
class student:public sport{
    public:
    void display(){
        Person::display();
        sport::display();
    }
};
int main(){
    student st;
    st.read();
    st.display();
    return 0;
}

