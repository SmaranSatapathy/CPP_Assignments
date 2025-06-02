/*Q3) Crate a class FLOAT that contains one float data member. Overload all the four arithmetic
operators so that they operate on the objects of FLOAT.*/

#include <iostream>
using namespace std;

class Float{
    public:
    float x;
    Float(){x=0.0;}
    Float(float x){
        this->x=x;
    }

    void display(){
        cout<<"Value is: "<<x<<endl;
    }

    Float operator+(Float &f){
        return Float(x + f.x);
    }

    Float operator-(Float &f){
        return Float(x - f.x);
    }
    
    Float operator*(Float &f){
        return Float(x * f.x);
    }

    Float operator/(Float &f){
        if(f.x == 0){
            cout << "Division by zero not allowed" << endl;
            return Float(0);
        }
        return Float(x / f.x);
    }
};
int main(){
    Float f1(10.5), f2(2.5);
    Float sum = f1 + f2;
    Float diff = f1 - f2;
    Float prod = f1 * f2;
    Float quot = f1 / f2;

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    diff.display();
    cout << "Product: ";
    prod.display();
    cout << "Quotient: ";
    quot.display();

    return 0;
}