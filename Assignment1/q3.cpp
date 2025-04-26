/*Q3) Write a function that creates a vector of user given size M using new operator.*/

#include <iostream>
using namespace std;

int* createArray(int n)
{
    int *arr=new int[n];
    return arr;
}

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int *arr=createArray(n);

    for(int i=0;i<n;i++)
    {
        cout<<"Enter value: ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;
}