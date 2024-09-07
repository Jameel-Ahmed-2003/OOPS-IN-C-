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
    void add()
    {
        c = a + b;
        cout << c;
    }
};
int main()
{
    Math a(10, 23);
    a.add();
    return 0;
}