#include <iostream>
using namespace std;

class A {
public:
    A() {
        cout << "in A" << endl;
    }
    
    A(int x) {
        cout << "In A int" << endl;
    }
};

class B2 : public A {
public:
    B2() {
        cout << "in B" << endl;
    }
    
    B2(int x) : A(x) { // Call the A(int x) constructor
        cout << "In B int" << endl;
    }
};

int main() {
    B2 obj(5); // Create an instance of B2 using the constructor that takes an int
    return 0;
}
