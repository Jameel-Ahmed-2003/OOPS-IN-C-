#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << add(12, 34)<<endl;
    cout << add(12.4, 98.3)<<endl;
    return 0;
}