// 
//                                          **Task**
// -Given a Book class and a Solution class, write a MyBook class that does the following:

// 1.Inherits from Book
// 2.Has a parameterized constructor taking these  parameters:
//      string title
//      string author
//      int price
// Implements the Book class' abstract display() method so it prints these  lines:
//      title, a space, and then the current instance's title.
//      author, a space, and then the current instance's author.
//      price, a space, and then the current instance's price.







#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

// Write your MyBook class here
class MyBook : protected Book
{
    //   Class Constructor
    string tit; 
    string auth;
    int price;
    public:
    MyBook(string t, string a, int p) : Book(t, a), price(p) {}
    
    

    void display(){
        cout<<"Title: "<<title<<endl;
        cout<<"Author: " <<author<<endl;
        cout<<"Price: "<<price<<endl;
    }
  
    
// End class
};



int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
