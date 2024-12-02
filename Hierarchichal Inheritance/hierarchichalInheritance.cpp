#include<iostream>
using namespace std;
class person{
    char name[30];
    public:
    void read(){
        cout<<"Enter name: ";
        cin>>name;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
    }
};
class sport:public person{
    int m;
    public:
    void display(){
        cout<<m<<"\n";
        person::display();
    }
};
class student:public person{
    public:
    void display(){
        person::display();
    }
};
int main(){
    sport sp;
    student st;
    sp.read();
    st.read();
    sp.display();
    st.display();
    return 0;
}