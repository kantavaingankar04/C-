#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}

    // Overload the '+' operator to add two Complex objects
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imag = imag + other.imag;
        return result;
    }

    // Display the complex number
    void display() {
        cout << real << " + " << imag << "i";
    }
};

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

