#include <iostream>
using namespace std;

class MyClass {
public:
    // Constructor
    MyClass() {
        cout << "Constructor called" << endl;
    }

    // Destructor
    ~MyClass() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    cout << "Creating an object..." << endl;
    MyClass obj; // Constructor is called when the object is created

    cout << "Object is in scope." << endl;

    cout << "Exiting the program..." << endl;

    // Destructor is called when the object goes out of scope (at the end of the program)

    return 0;
}

