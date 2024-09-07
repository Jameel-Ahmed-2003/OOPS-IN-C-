// destructor clears the memory created by objects
#include <iostream>
using namespace std;
class add
{
private:
int a,b,c;
public:
add(){
    a=67,b=23;
}
~add(){
    cout<<"Memory destroyed";//no need to worry about this because cpp has inbuilt destructor
}
void disp(){
    c=a+b;
    cout<<c;
}
};
int main()
{
    add a;
    a.disp();
    return 0;
}