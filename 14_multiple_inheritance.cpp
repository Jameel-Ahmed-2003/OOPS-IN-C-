//i can access both my mothers and fathers property son can own his father mother property
#include <iostream>
using namespace std;
class Father
{
public:
    void car() { cout << "Owns an audi car" << endl; }
};
class Mother
{
public:
    void bike() { cout << "Owns a bike" << endl; }
};
class Son:public Father,public Mother
{
public:
    void things() { cout << "Owns a cycle" << endl; }
};
int main()
{
    Father f;
    f.car();
    Mother m;
    m.bike();
    Son s;
    s.things();
    s.bike();
    s.car();
    return 0;
}