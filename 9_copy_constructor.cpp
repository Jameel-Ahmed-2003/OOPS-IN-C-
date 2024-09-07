// copy constructor depend on default constructor but no need to define copy constructor in public access specifier
#include <iostream>
using namespace std;
class Math
{
private:
    int a, b, c;

public:
    Math()
    {
        a=0,b=-12;
    }
    void display()
    {
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