#include<iostream>
#include <string>
using namespace std;

class Staff{
    public:
    int code;
    string name;
    Staff(){code=0;name="";}
    Staff (int c, string n){
        code=c;
        name=n;
    }

    void input(){
        cout<<"Enter code: ";
        cin>>code;
        cout<<"Enter name: ";
        cin.ignore(); 
        getline(cin, name);
    }
    

    void display(){
        cout<<"Code: "<<code<<", Name: "<<name<<endl;
    }
};

class Teacher:public Staff{
    public:
    string subject,publication;
    Teacher(){subject="";publication="";}
    
    void input(){
        Staff::input();
        cout<<"Enter subject: ";
        cin.ignore(); 
        getline(cin, subject);
        cout<<"Enter publication: ";
        getline(cin, publication);
    }
    void display(){
        Staff::display();
        cout<<"Subject: "<<subject<<", Publication: "<<publication<<endl;
    }
};

class typist:public Staff{
    public:
    int speed;
    typist(){speed=0;}
    
    void input(){
        Staff::input();
        cout<<"Enter speed: ";
        cin>>speed;
    }
    
    void display(){
        Staff::display();
        cout<<"Speed: "<<speed<<endl;
    }
};

class officer:public Staff{
    public:
    string grade;
    officer(){grade="";}
    
    void input(){
        Staff::input();
        cout<<"Enter grade: ";
        cin.ignore(); 
        getline(cin, grade);
    }
    
    void display(){
        Staff::display();
        cout<<"Grade: "<<grade<<endl;
    }
};

class regular:public typist{
    public:
    void display(){
        typist::display();
    }
};

class casual:public typist{
    public:
    double daily_wages;
    casual(){daily_wages=0.0;}
    void input(){
        typist::input();
        cout<<"Enter daily wages: ";
        cin>>daily_wages;
    }
    void display(){
        typist::display();
    }
};
int main()
{
    // Teacher t;
    // t.input();
    // t.display();
    regular r;
    r.input();
    r.display();
}