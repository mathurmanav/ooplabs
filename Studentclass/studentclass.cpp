#include<iostream>
using namespace std;
class Person{
    public:
    char name[30];
    int age;
};
class Student:private Person{
    public:
    void display(){
        cout<<"Student name: "<<name<<endl;
        cout<<"Student age: "<<age<<endl;
}
void setter(){
    cout<<"Enter name : "<<endl;
    cin>>name;
    cout<<"Enter age: "<<endl;
    cin>>age;

}
};
int main(){
    Student st;
    st.setter();
    st.display();
    return 0;
}