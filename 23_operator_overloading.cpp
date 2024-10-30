#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex() { real = 0, img = 0; }
    Complex(int r, int i) { real = r, img = i; }
    void print(){cout<<real<<" + "<<img<<"i"<<endl;}
    Complex operator +(Complex C){
        Complex temp;
        temp.real=real+C.real;
        temp.img=img+C.img;
    }
};
int main()
{
    int a = 10, b = 20, c = a + b;
    Complex c1(2,5),c2(3,2);
    Complex c3=c1+c2;//this performs operator overloading
    // Complex c3(c1+c2);//this act as a copy constructor
    c3.print();
    return 0;
}