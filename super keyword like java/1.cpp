#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"in A"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"in B"<<endl;
    }
};
int main(){
    B*obj=new B();
    return 0;
}