//A-> B -> C indirect accessing of the master class property by accessing super class here master class is grandFather and superclass is father and child class is son
#include <iostream>
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
class son:public father{
    public:
    void car(){
        cout<<"Owns a car"<<endl;
    }
};
int main()
{
    son prop;
    prop.car();
    prop.house();
    prop.land();
    return 0;
}