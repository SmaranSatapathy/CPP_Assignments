/*Q3) Create two classes DM and DB which store the value of distances. DM stores distances in
metres and centimetres and DB in feet and inches. Write a program that can read values for
the class objects and add one object of DM with another object of DB.
Use a friend function to carry out the addition operation. The object that stores the results
may be a DM object or DB object, depending on the units in which the results are required.
The display should be in the format of feet and inches or metres and centimetres depending
on the object on display.*/

#include <iostream>
using namespace std;

class DB;

class DM{
    int metres,centimetres;

    public:
    DM()
    {
        metres=0;
        centimetres=0;
    }

    DM(int m,int c)
    {
        metres=m;
        centimetres=c;
    }

    void input_values()
    {
        cout<<"Enter metres and centimetres: ";
        cin>>metres>>centimetres;
    }

    void display(){cout<<"Metres are: "<<metres<<" and centimetres are: "<<centimetres<<endl;}

    friend DM add_func(DM&,DB&);
};

class DB{
    int feets,inches;

    public:
    DB()
    {
        feets=0;
        inches=0;
    }

    DB(int f,int in)
    {
        feets=f;
        inches=in;
    }

    void input_func()
    {
        cout<<"Enter feets and inches: ";
        cin>>feets>>inches;
    }

    void display(){cout<<"Feets are: "<<feets<<" and inches are: "<<inches<<endl;}

    friend DM add_func(DM&,DB&);
};

DM add_func(DM &dm, DB &db)
{
    float total_inches = db.feets * 12 + db.inches;
    float total_cm_from_db = total_inches * 2.54;

    int total_cm_from_dm = dm.metres * 100 + dm.centimetres;

    float total_cm = total_cm_from_dm + total_cm_from_db;

    int meters = total_cm / 100;
    int centimeters = (int)total_cm % 100;

    return DM(meters, centimeters);
}

int main()
{
    DM dm;
    DB db;

    dm.input_values();
    dm.display();

    db.input_func();
    db.display();

    DM add_ans=add_func(dm,db);
    add_ans.display();
}