/*Create a class called calculator which implements basic arithmetic operations.
 22CO24 Kanta Vaingankar 31/08/202*/

#include <iostream>
using namespace std;

class Calculator
{
public:
    // Function to add two numbers
    double add(double num1, double num2)
    {
        return num1 + num2;
    }

    // Function to subtract two numbers
    double subtract(double num1, double num2)
    {
        return num1 - num2;
    }

    // Function to multiply two numbers
    double multiply(double num1, double num2)
    {
        return num1 * num2;
    }

    // Function to divide two numbers
    // Returns 0 if division by zero is attempted
    double divide(double num1, double num2)
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0.0;
        }
        return num1 / num2;
    }
};

int main()
{
    Calculator calculator;

    double num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform arithmetic operations
    cout << "Sum: " << calculator.add(num1, num2) << endl;
    cout << "Difference: " << calculator.subtract(num1, num2) << endl;
    cout << "Product: " << calculator.multiply(num1, num2) << endl;

    // Check for division by zero
    double result = calculator.divide(num1, num2);
    if (result != 0) {
        cout << "Quotient: " << result << endl;
    }

    return 0;
}

