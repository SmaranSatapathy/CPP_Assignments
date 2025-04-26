#include <iostream>
using namespace std;

int** createArray(int m,int n)
{
    int** arr=new int*[m];

    for(int i=0;i<m;i++)
    {
        arr[i]=new int[n];
    }
    return arr;
}

void deleteArray(int** arr,int m)
{
    for(int i=0;i<m;i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}

int main()
{
    int m,n;
    cout<<"Enter rows and columns: ";
    cin>>m>>n;

    int** arr=createArray(m,n);

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter value: ";
            cin>>arr[i][j];
        }
    }

    // printing the matrix:
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}