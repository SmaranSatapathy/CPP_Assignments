/*Q2) Create a base class called shape. Use this class to store two double type values that could be
used to compute the area of figures. Derive two specific classes called triangle and rectangle
from the base shape. Add to the base class, a member function get data() to initialize base
class data members and another member function display area() to compute and display the
area of figures. Make display area() as a virtual function and redefine this function in the
derived classes to suit their requirements.
Using these three classes, design a program that will accept dimensions of a triangle or a
rectangle interactively, and display the area.
Remember the two values given as input will be treated as lengths of two sides in the case of
rectangles and as base and height in the case of triangles, and used as follows:
Area of rectangle = x * y
Area of triangle = 1⁄2 * x * y  */

#include <iostream>
using namespace std;

class Shape{
    public:
    double x,y;
    Shape(){x=0.0;y=0.0;}
    Shape(double x,double y)
    {
        this->x=x;
        this->y=y;
    }

    void getData()
    {
        cin>>x>>y;
    }

    virtual void display(){
        cout<<"This is Shape display."<<endl;
    }
};

class Triangle:public Shape{
    public:
    double area;
    void display() override{
        area=0.5*x*y;
        cout<<"Area of Triangle: "<<area<<endl;
    }
};

class Rectangle:public Shape{
    public:
    double area;
    void display() override{
        area=x*y;
        cout<<"Area of Rectangle: "<<area<<endl;
    }
};

int main()
{
    Triangle t;
    cout<<"Enter base and height of Triangle: ";
    t.getData();
    t.display();
    Rectangle r;  
    cout<<"Enter length and breadth of Rectangle: "; 
    r.getData();
    r.display();
}