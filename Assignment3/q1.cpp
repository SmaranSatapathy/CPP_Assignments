/*Q1) Define a class String that could work as an user-defined string type. Include constructors that
will enable us to create uninitialized string
String s1; // string with length 0

and also to initialize an object with a string constant at the time of creation like

String s2(”Well done!”);

Include a function that adds two strings to make a third string. Note that the statement
s2 = s1;
will be perfectly reasonable expression to copy one string to another. Write a complete program
to test your class to see that it does the following tasks:
(a) Creates uninitialized string objects.
(b) Creates objects with string constants.
(c) Concatenates two strings properly.
(d) Displays a desired string object.*/

#include <iostream>
#include <string>
using namespace std;

class String{
    string s;

public:
    String()
    {
        s="";
    }

    String(const string &s){this->s=s;}

    void display()
    {
        cout<<"String is: "<<s<<endl;
    }

    String operator +(String s)
    {
        return String(this->s+s.s);
    }

};

int main()
{
    String s1("Hello ");
    String s2(" Lonewolf");
    String s=s1+s2;
    s.display();
}