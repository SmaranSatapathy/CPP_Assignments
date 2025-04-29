/*Q3) Create a class Complex with data members real and imaginary. Initialize two objects of the
Complex class using constructors. Include a static member function addcomplex() to perform
the addition of two complex numbers and return the result.
Sample Run:
A = 3.12 +j 5.65
B = 2.75 +j 1.21
C = 5.87 +j 6.86
Here, A, B, and C represent the objects of class Complex.*/

#include <iostream>
using namespace std;

class Complex{
    double real,imag;

    public:
    Complex(){real=0.0;imag=0.0;}
    Complex(double r,double i){real=r;imag=i;}

    void input_complex()
    {
        cout<<"Enter real and imaginary part:";
        cin>>real>>imag;
    }

    void display(){cout<<"Real part is: "<<real<<" imaginary is: "<<imag<<endl;}

    static Complex addComplex(Complex a,Complex b)
    {
        return Complex(a.real+b.real,a.imag+b.imag);
    }

};

int main()
{
    Complex A,B,C;
    A.input_complex();
    B.input_complex();
    C.input_complex();

    Complex result=Complex::addComplex(A,C);  
    result.display();
}