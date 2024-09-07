#include <iostream>
using namespace std;
class Bank
{
private:
    int accountNumber;
    string userName;
    char accountType;

public:
    void getAccountDetails()
    {
        cout << "Enter Account Name : ";
        getline(cin, userName);
        cout << "Enter Account Type : ";
        cin >> accountType;
        cout << "Enter Account Number : ";
        cin >> accountNumber;
    }
    void displayDetails()
    {
        cout << "Customer Name : " << userName
             << "\nAccount Type : " << accountType
             << "\nAccount Number : " << accountNumber;
    }
};
class CurrentAccount : public Bank
{
private:
    float balance;
public:
    float depositAmount;
    float withDrawAmount;
    int minimumBalance; //both in savings account and current account
    CurrentAccount()
    {
        depositAmount = 0;
    }
    CurrentAccount(int amount)
    {
        depositAmount=amount;
    }
    void c_display()
    {
        cout << "Balance : " << balance << endl;
    }
    void c_deposit()
    {
        cout<<"Enter the amount to deposit : ";
        cin>>depositAmount;
        balance += depositAmount;
        cout<<"Amount successfully deposited\n";
    }
    void c_withDraw(){
        cout<<"Balance Amount : "<<balance<<endl;
        cout<<"Enter the amount to withdraw : ";
        cin>>withDrawAmount;
        if(balance>minimumBalance)
        {balance-=withDrawAmount;cout<<"Amount ";}
        else
        cout<<"Insufficient Balance!\n";
    }
};
class savingsAccount:public Bank{
    private:
    float s_balance;
    public:
    void s_display(){
        cout<<"Balance : "<<s_balance<<endl;
    }
    void s_deposit(){
        
    }
};
int main()
{
    Bank person1;
}