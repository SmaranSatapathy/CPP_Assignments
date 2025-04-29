/*Q4) Create a class distance with private data members km,m,cm. Include the following member
functions:
input distance() with 3 parameters to initialize the distance object.
display() to display a distance object.
add distance() to perform addition of 2 distance objects and will return the result.
In the main function, create an array of n distance objects, initialize and display them. Perform
addition of any 2 distance object by prompting the user for the index of 2 objects in the array.
Display the result.*/

#include <iostream>
using namespace std;

class Distance{
    int km,m,cm;
public:
    Distance()
    {
        km=0;
        m=0;
        cm=0;
    }

    Distance(int km,int m,int cm)
    {
        this->km=km;
        this->m=m;
        this->cm=cm;
    }

    void input_distance()
    {
        cout<<"Enter km,cm and m: ";;
        cin>>km>>m>>cm;
    }

    void display(){
        cout<<"Kilometer is: "<<km<<" meter is: "<<m<<" centimetre is: "<<cm<<endl;
    }

    Distance add_distance(Distance &d)
    {
        int total_cm=cm+d.cm;
        int total_m=m+d.m+total_cm/100;
        total_cm%=100;

        // int total_m=m+d.m;
        int total_km=km+d.km+total_m/1000;
        total_m%=1000;

        return Distance(total_km,total_m,total_cm);
    }
};

int main()
{
    int n;
    cout<<"Enter number of objects: ";
    cin>>n;
    Distance* d=new Distance[n];

    for(int i=0;i<n;i++)
    {
        cout<<"For "<<i+1<<" object"<<endl;
        d[i].input_distance();
        d[i].display();
    }

    int idx1,idx2;

    cout<<"Enter two indexes: ";
    cin>>idx1>>idx2;

    Distance add=d[idx1].add_distance(d[idx2]);
    add.display();
}