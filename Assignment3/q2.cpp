/*Q2) A book shop maintains the inventory of books that are being sold at the shop. The list includes
details such as author, title, price and publisher. Whenever a customer wants a book, the
salesperson inputs the title and author, and the system searches the list and displays whether
it is available in the shop or not. If not, an appropriate message is displayed. If it is, then
the system displays the book details for sale. Design a program using a class called Book with
suitable member functions and constructors.*/

#include <iostream>
#include <string>
using namespace std;

class Book{
    public:
    string author,title,publisher;
    double price;

public:
    Book(){author="";title="";publisher="";price=0;}
    Book(string author,string title,string publisher,double price)
    {
        this->author=author;
        this->title=title;
        this->publisher=publisher;
        this->price=price;
    }

    void inventory()
    {
        cin.ignore();
        cout<<"Enter author: ";
        getline(cin,author);
        cout<<"Enter title: ";
        getline(cin,title);
        cout<<"Enter publisher: ";
        getline(cin,publisher);
        cout<<"Enter price: ";
        cin>>price;
    }

    void input_details()
    {
        cin.ignore();
        cout<<"Enter author name: ";
        getline(cin,author);
        cout<<"Enter title: ";
        getline(cin,title);
    }

    void print_details()
    {
        cout<<"Publisher is: "<<publisher<<" and price is Rs."<<price<<endl;
    }
};

int main()
{
    int n,flag=0;
    cout<<"Enter number: ";
    cin>>n;
     Book* b=new Book[n];

     for(int i=0;i<n;i++)
     {
        cout<<"Details of Book "<<i+1<<endl;
        b[i].inventory();
     }

    string author,title;
    cout<<"Enter author to search: ";
    cin.ignore();
    getline(cin,author);

    cout<<"Enter title to search: ";
    cin.ignore();
    getline(cin,title);

    for(int i=0;i<n;i++)
    {
        if(author==b[i].author && title==b[i].title) {b[i].print_details(); flag=1;break;}
    }

    if(flag) cout<<"Book found";
    else cout<<"Book not found";

}