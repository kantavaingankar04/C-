#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    void display() {
        cout << real << " + " << imag << "i";
    }

    // Declare the friend function for adding Complex objects
    friend Complex operator+(const Complex& c1, const Complex& c2);
};

// Define the friend function for adding Complex objects
Complex operator+(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

int main() {
    Complex num1(3.5, 2.5);
    Complex num2(1.2, 4.3);
    Complex sum;

    sum = num1 + num2;

    cout << "Number 1: ";
    num1.display();
    cout << endl;

    cout << "Number 2: ";
    num2.display();
    cout << endl;

    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}

