//all constructors for same program at once
#include <iostream>
using namespace std;
class Math
{
private:
    int a, b, c;

public:
    Math()
    {
        a = 0, b = 0;
    }
    Math(int x, int y)
    {
        a = x, b = y;
    }
    Math(Math&X)
    {
        a = X.a,b=X.b;
    }
    void display()
    {
        c = a + b;
        cout << c<<endl;
    }
};
int main()
{
    Math a(10, 24);
    a.display();
    Math b(a);
    b.display();
    Math c;
    c.display();
    return 0;
}