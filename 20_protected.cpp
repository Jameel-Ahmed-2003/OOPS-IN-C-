//to use protected minimum atleast 2 classes are required .Anything under protected access specifier can be accessed only within the class and the inherited class and cannot be accessed anywhere outside
#include <iostream>
using namespace std;
class A
{
protected:
    int x;
};
class B : public A
{
public:
    void getDetails(){
        cout<<"Enter the value of x: ";
        cin>>x;
    }
    void display(){
        cout<<"x = "<<x<<endl;
    }
};
int main()
{
    B o;
    o.getDetails();
    o.display();
    return 0;
}