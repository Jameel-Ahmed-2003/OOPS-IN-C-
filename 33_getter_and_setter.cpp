//Encapsulation ->getters and setters, this keyword
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
    string name;
    int age;
    public:
    student(string s,int a){
        name=s;
        age=a;
    }
    string getName(){
        return this->name;
    }
    void setName(string s){
        this->name=s;
    }
    int getAge(){
        return age;
    }
    void setAge(int a){
        this->age=a;
    }
    void printDetails(){
        cout<<"Name : "<<name<<endl<<"Age : "<<age<<endl; 
    }
};
int main(){
    student obj("Jameel Ahmed",21);
    obj.printDetails();
    obj.setName("Mohammed Aslam");
    obj.setAge(22);
    obj.printDetails();
    return 0;
}