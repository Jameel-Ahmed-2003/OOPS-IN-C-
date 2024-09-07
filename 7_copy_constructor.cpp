//copy constructor depending on parameterized constructor
#include <iostream>
using namespace std;
class Math
{
private:
    int a, b, c;

public:
    Math(int x, int y)
    {
        a = x, b = y;
    }
    Math(Math &x)
    {
        a = x.a, b = x.b;
    }
    void display()
    {
        c = a + b;
        cout << c << endl;
    }
};
int main()
{
    Math a(12, 24);
    a.display();
    Math b(a);
    b.display();
    return 0;
}