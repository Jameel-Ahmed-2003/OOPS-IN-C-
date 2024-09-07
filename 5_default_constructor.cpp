#include <iostream>
using namespace std;
class Math
{
private:
    int a, b, c;

public:
    Math()
    {
        a = 3, b = 2;
    }
    void add()
    {
        c = a + b;
        cout << c;
    }
};
int main()
{
    Math a;
    a.add();
    return 0;
}