#include <iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}

    // Overload the unary minus (-) operator as a member function
    MyNumber operator-() {
        return MyNumber(-value);  // Return the negated value
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    MyNumber num(5);

    cout << "Original value: ";
    num.display();

    MyNumber negatedNum = -num;  // Overload the unary minus operator

    cout << "Negated value: ";
    negatedNum.display();

    return 0;
}

