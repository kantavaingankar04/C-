#include <iostream>
using namespace std;

class ComplexNos {
private:
    double real;
    double imag;

public:
    // Parameterized constructor to initialize data members
    ComplexNos(double r, double i) {
        real = r;
        imag = i;
    }

    // Copy constructor to create a copy of a ComplexNos object
    ComplexNos(const ComplexNos& other) {
        real = other.real;
        imag = other.imag;
    }

    // Member function to compute the sum of two complex numbers
    ComplexNos add(const ComplexNos& other) {
        return ComplexNos(real + other.real, imag + other.imag);
    }

    // Member function to compute the difference of two complex numbers
    ComplexNos subtract(const ComplexNos& other) {
        return ComplexNos(real - other.real, imag - other.imag);
    }

    // Member function to display the complex number
    void display() {
        cout << real << " + " << imag << "i";
    }
};

int main() {
    // Create ComplexNos objects using parameterized constructors
    ComplexNos complex1(3.0, 2.0);
    ComplexNos complex2(1.5, 4.5);

    // Create a copy of complex1 using the copy constructor
    ComplexNos complex3(complex1);

    // Compute and display the sum of complex1 and complex2
    ComplexNos sum = complex1.add(complex2);
    cout << "Sum: ";
    sum.display();
    cout << endl;

    // Compute and display the difference of complex1 and complex2
    ComplexNos difference = complex1.subtract(complex2);
    cout << "Difference: ";
    difference.display();
    cout << endl;

    // Display complex3 (a copy of complex1)
    cout << "Complex3 (Copy of Complex1): ";
    complex3.display();
    cout << endl;

    return 0;
}

