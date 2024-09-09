#include <iostream>
using namespace std;
class Marks
{
    private:
       int rno;
       float perc;
    public:
       Marks(){
        rno=0;
        perc=0;
    } 
        Marks(int r, float p){
         rno=r;
         perc=p;
        }
        void printDetails(){
            cout<<"Roll no:"<<rno<<endl;
            cout<<"percentage:"<<perc<<endl;   
    }
};
  class Student
  {
    private:
      Marks objM;
      string name;
    public:
    void SetName(){
        cout<<"Enter the name:"<<endl;
        cin>>name;
    }
    void getResult(Marks obj){
        objM=obj;
        cout<<"name:"<<name;
        objM.printDetails();
    }
  };
  int main(){
    Marks Mks[5]={Marks(3001,81),Marks(2001,85),Marks(2000,79),Marks(2002,95),Marks(2005,90)};
    Student std[5];
    for(int i=0;i<5;i++)
    {
        std[i].SetName();
    }
    for(int i=0;i<5;i++)
    {
        std[i].getResult(Mks[i]);
    }
  }
