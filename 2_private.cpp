#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int age;

public:
    void getData()
    {
        cout << "Enter Name : ";
        getline(cin,name);
        cout << "Enter Age : ";
        cin >> age;
    }
    void display()
    {
        (age >= 18) ? cout << name << " is eligible to vote as his age " << age << " is greater than 18 " : cout << "Not eligible";
    }
};
int main()
{
    student s1;
    s1.getData();
    s1.display();
    return 0;
}