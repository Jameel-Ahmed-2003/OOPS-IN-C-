//Son can inherit the property of father including his own property
#include <iostream>
using namespace std;
class Father
{
public:
    void Fatherbelongings()
    {
        cout << "I own an AUDI Car" << endl;
    }
};
class Son : public Father
{
public:
    void sonBelongings()
    {
        cout << "I own a fastrack watch" << endl;
    }
};
int main()
{
    Father prop1;
    prop1.Fatherbelongings();
    Son prop2;
    prop2.Fatherbelongings();
    prop2.sonBelongings();
    return 0;
}