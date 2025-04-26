/*Q7) Write a macro that obtains the largest of the three numbers.*/
#include <iostream>
using namespace std;

#define Largest(a,b,c) ((a>b)?(a>c?a:c):(b>c?b:c))

int main()
{
    int a,b,c;
    cout<<"Enter values for a,b,c:";
    cin>>a>>b>>c;

    int largest=Largest(a,b,c);
    cout<<"Largest Number is: "<<largest;
}