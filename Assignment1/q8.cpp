/*Q8) Write a function power() to raise a number m to power n. The function takes a double value
for m and int value for n and returns the result correctly. Use a default value of 2 for n to
make the function to calculate the squares when this argument is omitted. Write a main that
gets the values of m and n from the user to test the function.*/

#include <iostream>
using namespace std;

double power(double m,int n=2)
{
    double ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=m;
    }
    return ans;
}

int main()
{
    double m;
    cout<<"Enter value for m: ";
    cin>>m;
    char choice;
    cout<<"Want to enter n or power value? ";
    cin>>choice;

    if(choice=='Y' || choice=='y')
    {
        int n;
        cout<<"Enter value for n: ";
        cin>>n;
        cout<<"Power is: "<<power(m,n);
    }

    else
        cout<<"Power is: "<<power(m);
}