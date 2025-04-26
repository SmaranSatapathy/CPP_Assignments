/*Q2) Write a function using reference variables as arguments to swap the values of a pair of integers.*/

#include <iostream>
using namespace std;
void reverse(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a,b;
    cout<<"Enter values for a and b:";
    cin>>a>>b;
    cout<<a<<","<<b<<endl;
    reverse(&a,&b);
    cout<<a<<","<<b;
}