#include<iostream>
#include<math.h>
using namespace std;
class Circle{
    private:
    float radius;
    public:
    float area(){
       cout<<"Enter your radius : ";
       cin>>radius;
       return 3.14*pow(radius,2);
    }
    float circumference()
    {
        return 2*3.14*radius;
    }
};
int  main(){
    Circle x;
    cout<<x.area()<<endl;
    cout<<x.circumference();
    return 0;
}