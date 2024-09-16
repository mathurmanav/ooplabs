#include<iostream>
using namespace std;
class Book{
    private:
    int bookId;
    int pages;
    int price;
    public:
    void setbookid(int id){
        bookId=id;
    }
    void setPages(int p){
        pages=p;
    }
    void setPrice(int pr){
        price=pr;
    }
    int getBookid(){
        return bookId;
    }
     int getPages(){
        return pages;
    }
     int getPrice(){
        return price;
    }
    void ShowBookdetails(){
        cout<<"Book ID: "<<bookId<<endl;
        cout<<"Number of Pages: "<<pages<<endl;
        cout<<"Price: rs: "<<price<<endl;
    }
};
int main(){
    Book *obj1=new Book();
    Book *obj2=new Book();
    obj1->setbookid(101);
    obj1->setPages(200);
    obj1->setPrice(300);

    obj2->setbookid(102);
    obj2->setPages(350);
    obj2->setPrice(250);

    cout<<"Book 1 details"<<endl;
    obj1->ShowBookdetails();

    cout<<"Book 2 details"<<endl;
    obj2->ShowBookdetails();
          if (obj1->getPrice() > obj2->getPrice())
          {
           cout<<"The costlier book is 1 with a price: "<<obj1->getPrice()<<endl;
          }
          else{
           cout<<"The costlier book is 2 with a price: "<<obj2->getPrice()<<endl;
          }

          Book *obj[5];
          for (int i = 0; i < 5; i++)
          {
            obj[i]=new Book();
            obj[i]->setbookid(201+i);
            obj[i]->setPages(100+i*50);
            obj[i]->setPrice(5+i*2);
          }
          int maxpages=obj[0]->getPages();
          int thisckestBook=obj[0]->getBookid();
          for (int i = 0; i < 5 ; i++)
          {
            if (obj[i]->getPages()>maxpages)
            {
                maxpages=obj[i]->getPages();
                thisckestBook=obj[i]->getBookid();
            }
          }
          cout<<"Thisckest Book id is "<< thisckestBook<<endl;
          for (int i = 0; i < 5; i++)
          {
            delete obj[i];
          }
          return 0;
}