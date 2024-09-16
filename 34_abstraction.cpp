#include <iostream>
using namespace std;
class Bank
{
public:
virtual void debit_credit()=0;
};
class HDFC:public Bank
{
    void debit_credit(){cout<<"HDFC Bank Debit\n";}
};
class IB:public Bank
{
    void debit_credit(){cout<<"Indian Bank Debit\n";}
};
int main()
{
    HDFC obj2;
    Bank*obj1=&obj2;
    obj1->debit_credit();
    return 0;
}