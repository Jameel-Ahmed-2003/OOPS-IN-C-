#include<bits/stdc++.h>
using namespace std;
class base final{
    public:
    string name;
    int roll_no;
    void fun1(){
        cout<<"Base class\n";
    }
};
class derived :public base{
    int reg_no;
    void fun2(){
        cout<<"Derived class\n";
    }
};
int main(){

    return 0;
}