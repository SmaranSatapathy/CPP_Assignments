/*Write a program to show how the increment operator (++) is overloaded.*/

#include<iostream>
using namespace std;

class Counter{
    public:
    int x;
    Counter(){x=0;}
    Counter(int x){
        this->x=x;
    }

    Counter operator++(){
        ++x;
        return Counter(x);
    }

    Counter operator+(int){
        x++;
        return Counter(x);
    }

    void display(){
        cout<<"Value is: "<<x<<endl;
    }
};

int main()
{
    Counter c(45);
    c.display();
    cout<<"For preincrement"<<endl;
    Counter c1=++c;
    c1.display();
    cout<<"For postincrement"<<endl;
    Counter c2=c+1;
    c2.display();
}