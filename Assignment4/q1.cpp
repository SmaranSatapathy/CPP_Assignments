/*Q1) Design a class Polar which describes a point in the plane using polar coordinates radius and
angle. A point in polar coordinates is shown in the figure below. Use the overload + operator
to add two objects of Polar.

Figure 1: Polar coordinates of a point

Note that we cannot add polar values of two points directly. This requires first the conver-
sion of points into rectangular coordinates, then adding the respective rectangular coordinates

and finally converting the result back into polar coordinates. You need to use the following
trigonometric formula:
x = r * cos(a);
y = r * sin(a);
a = atan(y/x); //arc tangent
r = sqrt(x*x + y*y);*/

#include <iostream>
#include <cmath>
using namespace std;

class Polar{
    public:
    double r,a;
    Polar(){r=0.0;a=0.0;}
    Polar(double r,double a)
    {
        this->r=r;
        this->a=a;
    }

    void display(){
        cout<<"Polar Coordinates: ("<<r<<", "<<a<<")"<<endl;
    }

    Polar operator+(Polar &p){
        double x1=r*cos(a);
        double y1=r*sin(a);

        double x2=r*cos(p.a);
        double y2=r*sin(p.a);

        double x=x1+x2;
        double y=y1+y2;

        double new_radius=sqrt(x*x+y*y);
        double new_angle=atan2(y,x);
        return Polar(new_radius, new_angle);
    }
};

int main()
{
    Polar p1(5.0, 0.927); 
    Polar p2(3.0, 0.524); 
    Polar p3 = p1 + p2; 
    p3.display(); 
}