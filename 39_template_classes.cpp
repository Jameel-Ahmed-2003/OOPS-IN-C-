#include<iostream>
using namespace std;
template <typename T>
class A{
    private:
    T a;
    T b;
    public:
     A(T x,T y){
        a=x;
        b=y;
    }
    void display(){
        cout<<a<<" "<<b;
    }
};
int main(){
    A<int>obj(12,20);
    obj.display();
    return 0;
}