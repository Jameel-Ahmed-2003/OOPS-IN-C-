//Base class pointer and derived class object
#include <iostream>
using namespace std;
class car
{
public:
    void start() { cout << "Car start\n"; }
};
class BMW:public car{
public:
void advancedGear(){
    cout<<"BMW Advanced Gear\n";
}
};
int main()
{
    car*b=NULL;
    BMW d;
    b=&d;
    b->start();//BMW instance can call start function
    // o.start();
    // o.advancedGear();
}