//friend function
#include<iostream>
using namespace std;
class A{
    private:
    int x,y;
    public:
    friend void setData();
};
void setData(){
    A o;
    o.x=10;
    o.y=20;
    cout<<"x = "<<o.x<<endl;
    cout<<"y = "<<o.y<<endl;
}
int main(){
    setData();
    return 0;
}