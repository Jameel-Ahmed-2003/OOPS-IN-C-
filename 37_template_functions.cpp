#include <iostream>
using namespace std;
template <class T>
T add(T a, T b)
{
    return a + b;
}
int main()
{
    cout << add<int>(12, 34)<<endl;
    cout << add<double>(12.4, 98.3)<<endl;
    cout << add<string>("Jameel ", "Ahmed")<<endl;
    return 0;
}