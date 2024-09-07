//copy constructor without any other constructor but no need to define copy constructor in public access specifier
#include <iostream>
using namespace std;
class Math
{
private:
    int a, b, c;

public:
    void display()
    {
        a=0,b=12;
        c = a + b;
        cout << c << endl;
    }
};
int main()
{
    Math a;
    a.display();
    Math b(a);
    b.display();
    return 0;
}