#include <iostream>
using namespace std;
class MyClass {
public:
    static void staticMethod() {
        cout << "Static method called!" << std::endl;
    }
};

int main() {
    // Calling the static method without creating an object
    MyClass::staticMethod();
    return 0;
}
