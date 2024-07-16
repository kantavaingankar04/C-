#include <iostream>
using namespace std;

class MyInteger {
private:
    int value;

public:
    MyInteger(int val) : value(val) {}

    // Overload the ++ operator (prefix increment) as a member function
    MyInteger operator++() {
        value++;  // Increment the value
        return *this;  // Return the updated object
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyInteger num(5);

    cout << "Original value: ";
    num.display();

    ++num;  // Overload the ++ operator to increment the value

    cout << "After increment: ";
    num.display();

    return 0;
}

