//multiple subclasses will depend on the base class
#include<iostream>
using namespace std;
class Shape{
    public:
    float length,breadth,radius;

};
class rect:public Shape{
    public:
    void getData(){
        cout<<"Enter length : ";
        cin>>length;
    }
    void show(){
        cout<<length*length;
    }
};
class circle:public Shape{
    public:
    void getCircleDetails(){
        cout<<"Enter radius : ";
        cin>>radius;
    }
    int getArea(){
        getCircleDetails();
        return 3.14*(radius*radius);
    }
    void area(){
        cout<<getArea()<<endl;
    }
};
class square:public Shape{
    public:
    void getVal(){
        cout<<"Enter lenght : ";
        cin>>length;
        cout<<"Enter breadth : ";
        cin>>breadth;
    }
    int calc(){
        getVal();
        return length*breadth;
    }
    void disp()
    {
        cout<<calc()<<endl;
    }
};
int main(){
    circle x;
    x.area();
    square l;
    l.disp();
    rect y;
    y.getData();
    y.show();
    return 0;
}