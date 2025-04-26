/*Q9) Write a function that performs the same operation as that of Problem no. 1.8 but takes an int
value for m. Both the functions should have the same name. Write a main that calls both the
functions. Use the concept of function overloading.*/

#include <iostream>
using namespace std;
double power(double m,int n=2)
{
    double ans=1;
    for(int i=0;i<n;i++)
    {
        ans*=m;
    }
    return ans;
}

int power(int m,int n=2)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=m;
    }
    return ans;
}
int main()
{
    // for double data type 'm':
    double md;
    cout<<"Enter double value of m: ";
    cin>>md;
    char choice;
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice=='Y'||choice=='y')
    {
        int n;
        cout<<"Enter value of n: ";
        cin>>n;
        cout<<"Power is: "<<power(md,n)<<endl;
    }

    else cout<<"Power is: "<<power(md)<<endl;

    // for int data type 'm':
    int mi;
    cout<<"Enter integer value of m: ";
    cin>>mi;

    cout<<"Enter choice: ";
    cin>>choice;

    if(choice=='Y'||choice=='y')
    {
        int n;
        cout<<"Enter value of n: ";
        cin>>n;
        cout<<"Power is: "<<power(mi,n)<<endl;
    }

    else cout<<"Power is: "<<power(mi)<<endl;

    
}