// function overriding is redefining a function or redefining a function that is inherited in another class [method overriding]. When creating object for derived class the function inside derived class will hide the base class function
#include <iostream>
using namespace std;
class base
{
protected:
    int a, b;

public:
    void add()
    {
        cout << "Enter 2 numbers : ";
        cin >> a >> b;
        cout << "Total : " << a + b << endl;
    }
};
class derived : public base
{
private:
    int c;

public:
    void add()
    {
        cout << "Enter 3 values : ";
        cin >> a >> b >> c;
        cout << "Sum : " << a + b + c << endl;
    }
};
int main()
{
    base a;
    a.add();
    derived b;
    b.add();
    return 0;
}