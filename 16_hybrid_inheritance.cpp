//combination of more variant of inheritance
#include<iostream>
using namespace std;
class grandFather
{
public:
    void house(){
        cout<<"3BHK house"<<endl;
    }
};
class father:public grandFather{
    public:
    void land(){
        cout<<"5Acrs land"<<endl;
    }
};
class mother{
    public:
    void gold(){
        cout<<"having gold"<<endl;
    }
};
class son:public father,public mother{
    public:
    void car(){
        cout<<"Owns a car"<<endl;
    }
};
int main()
{
    son x;
    x.car();
    x.gold();
    x.land();
    x.house();
    return 0;
}