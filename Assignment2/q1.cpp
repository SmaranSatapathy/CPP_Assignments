/*Q1) Define a class to represent a bank account. Include the following members
Data members:
1. Name of the depositor
2. Account number
3. Type of account (savings or current)
4. Balance amount in the account
Member functions:
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Write a main function to test the program. */

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
        balance+=deposit_amt;
        return balance; 
    }

    double withdraw_func(double withdraw_amt)
    {
        if(balance<=0) return balance;
        else {
        balance-=withdraw_amt;
        return balance;
        };
    }

    void display_info()
    {
        cout<<"Name is: "<<name<<endl;
        cout<<"Balance is: "<<balance<<endl;
    }
};

int main()
{
    Bank b;
    b.input_func();
    cout<<"Enter amount to be deposited: ";
    double deposit;
    cin>>deposit;
    b.deposit_amount(deposit);

    double withdraw;
    cout<<"Enter value to withdraw: ";
    cin>>withdraw;
    double ans=b.withdraw_func(withdraw);

    if(ans==-1) cout<<"Invalid funds.";
    else cout<<"Balance after withdraw is: Rs. "<<ans<<endl;

    b.display_info();
}