//inheritance with constructor
#include<iostream>
using namespace std;
class A{
    public:A(){cout<<"Constructing from A\n";}
};
class B:public A{
    public:B(){cout<<"Constructing from B\n";}
};
class C:public A{
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