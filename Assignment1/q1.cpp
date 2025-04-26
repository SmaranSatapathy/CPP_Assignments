/* Q1) WAP to create an enum (Day) containing 7 day names as its attributes. Prompt the user to
enter a day number as int type. Assign this day number to a variable of enum Day. Using
switch display the corresponding day name of the given day number. Pass the variable of Day
in switch and make the cases as attributes of Day.*/

#include <iostream>
using namespace std;

enum days{Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday,Sunday};

int main()
{
    int choice;
    cout<<"Enter choice: ";
    cin>>choice;

    switch(choice)
    {
        case 0:cout<<"Monday";break;
        case 1:cout<<"Tuesday";break;
        case 2:cout<<"Wednesday";break;
        case 3:cout<<"Thrusday";break;
        case 4:cout<<"Friday";break;
        case 5:cout<<"Saturday";break;
        case 6:cout<<"Sunday";break;
        default:cout<<"Wrong input";
    }
}