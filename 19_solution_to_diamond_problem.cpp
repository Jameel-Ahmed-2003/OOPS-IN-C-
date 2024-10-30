//inheritance with constructor virtual inheritance will block the constructor in A again to be called because A is already called by B and hence  C need not call again.
#include<iostream>
using namespace std;
class A{
    public:A(){cout<<"Constructing from A\n";}
};
class B:virtual public A{
    public:B(){cout<<"Constructing from B\n";}
};
class C:virtual public A{
    public:C(){cout<<"Constructing from C\n";}
};
class D:public B,public C{
    public:D(){cout<<"Constructing from D\n";}
};
int main()
{
    D o;
    return 0;
}