// pointer to derived class 25 26 are linked
#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void show()
    {
        cout << "x = " << x << endl;
    }//run this program first and again run this program using virtual keyword for the void show in this class
};
class derived : public base
{
public:
    int y;
    void show()
    {
        cout << "x = " << x << "\ny = " << y << endl;
    }
};
int main()
{
    derived d;
    d.x = 20, d.y = 30;
    d.show();
    base *ptr_b, b;
    ptr_b = &b;
    ptr_b->x = 45;
    ptr_b->show();
    ptr_b = &d;
    ptr_b->show();
    return 0;
}