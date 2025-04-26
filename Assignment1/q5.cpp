/*Q5) Write a program to read a matrix of size m*n from the keyboard and display the same on the screen using function.*/
#include <iostream>
using namespace std;

void createArray(int arr[10][10],int m,int n)
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

void displayArray(int arr[10][10],int m,int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int m,n;
    int arr[10][10];
    cout<<"Enter m and n:";
    cin>>m>>n;
    createArray(arr,m,n);
    displayArray(arr,m,n);
}