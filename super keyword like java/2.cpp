#include<iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"in A"<<endl;
    }
    A(int x){
        cout<<"in A int"<<endl;
    }
};
class B:public A{
    public:
    B(){
        cout<<"in B"<<endl;
    }
    B(int x){
        cout<<"in B int"<<endl;
    }
};
int main(){
    B*obj=new B(5);
    return 0;
}