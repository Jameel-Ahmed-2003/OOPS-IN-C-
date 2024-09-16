// pure virtual function
#include <iostream>
using namespace std;
class bike
{
public:
    virtual void start() { cout << "Bike Start\n"; }
};
class Apache : public bike
{
public:
    void start() { cout << "Apache start\n"; }
};
int main()
{
    bike *obj = new Apache();
    obj->start();
    return 0;
}