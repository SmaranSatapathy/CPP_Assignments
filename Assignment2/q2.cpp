/*Q2) Modify the class and program of Problem No. 2.1 for handling of 10 customers.*/

#include <iostream>
#include <string>
using namespace std;

class Bank{
    public:
    string name,type_of_accounts;
    long acc_number;
    double balance;

    void input_func()
    {
        cin.ignore();
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter type of account: ";
        cin>>type_of_accounts;
        cout<<"Enter account number: ";
        cin>>acc_number;
        cout<<"Enter balance amount initially: ";
        cin>>balance;
    }

    double deposit_amount(double deposit_amt)
    {
        return balance+deposit_amt; 
    }

    double withdraw_func(double withdraw_amt)
    {
        if(balance<=0) return -1;
        else return(balance-withdraw_amt);
    }

    void display_info()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Balance is: "<<balance<<endl;
    }
};

int main()
{
    Bank b[10];
    int choice,idx;

    
    while(true)
    {
        cout<<"Enter index of the customer: ";
        cin>>idx;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice)
    {
        case 1:
        {
            cout<<"Initialize the values:";
            b[idx].input_func();
            break;
        }

        case 2:
        {
            cout<<"Enter amount to be deposited: ";
            double deposit;
            cin>>deposit;
            b[idx].deposit_amount(deposit);
            break;
        }

        case 3: 
        {
            double withdraw;
            cout<<"Enter value to withdraw: ";
            cin>>withdraw;
            double ans=b[idx].withdraw_func(withdraw);

            if(ans==-1) cout<<"Invalid funds.";
            else cout<<"Balance after withdraw is: Rs. "<<ans<<endl;
            break;
        }

        case 4:
        b[idx].display_info(); break;

        default:
        cout<<"Wrong choice";
    }
    }
}
