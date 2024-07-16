#include <iostream>
using namespace std;

class Employee
{
public:
    // Calculate gross pay for regular employees
    double calculateGrossPay(double hoursWorked, double hourlyRate)
    {
        return hoursWorked * hourlyRate;
    }

    // Calculate gross pay for contract employees
    double calculateGrossPay(double contractAmount)
    {
        return contractAmount;
    }
};

int main()
{
    Employee employee;

    int employeeType;
    cout << "Enter employee type (1 for regular, 2 for contract): ";
    cin >> employeeType;

    if (employeeType == 1)
    {
        double hoursWorked, hourlyRate;
        cout << "Enter hours worked: ";
        cin >> hoursWorked;
        cout << "Enter hourly rate: ";
        cin >> hourlyRate;

        double grossPay = employee.calculateGrossPay(hoursWorked, hourlyRate);
        cout << "Gross pay for regular employee: $" << grossPay << endl;
    } else if (employeeType == 2)
    {
        double contractAmount;
        cout << "Enter contract amount: ";
        cin >> contractAmount;

        double grossPay = employee.calculateGrossPay(contractAmount);
        cout << "Gross pay for contract employee: $" << grossPay << endl;
    } else {
        cout << "Invalid employee type. Please enter 1 for regular or 2 for contract." << endl;
    }

    return 0;
}

