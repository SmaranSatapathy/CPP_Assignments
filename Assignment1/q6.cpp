/*Q6) Rewrite the Problem no. 1.5 to make the row parameter of the matrix as a default argument. */
#include <iostream>
using namespace std;

void createArray(int arr[10][10],int m=2,int n=2)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter value: ";
            cin>>arr[i][j];
        }
    }
}

void displayArray(int arr[10][10],int m=2,int n=2)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}

int main()
{
    int arr[10][10];
    int m,n;
    cout<<"Enter value for n: ";
    cin>>n;
    char choice;
    cout<<"Do you want to enter value for row? ";
    cin>>choice;

    if(choice=='Y'|| choice=='y')
    {
        cout<<"Enter m:";
        createArray(arr,m,n);
        displayArray(arr,m,n);
    }

    else{
        createArray(arr,n);
        displayArray(arr,n);
    }
}