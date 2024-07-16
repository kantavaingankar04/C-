/*Write a C++ program to calculate the value of F, given e=8.8542, pai=3.1415 and the user input q1, q2, r1, r2[ (F=1/(4*pai*e))(q1*q2/r1^2)*r2 ]
Kanta G. Vaingankar              22CO24*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double e = 8.8542; // Permittivity constant
    double pai = 3.1415; // Value of pi
    double q1, q2, r1, r2; // User input variables
    double F; // Resulting force

    // Input phase
    cout << "Enter the value of q1: ";
    cin >> q1;

    cout << "Enter the value of q2: ";
    cin >> q2;

    cout << "Enter the value of r1: ";
    cin >> r1;
    cout << "Enter the value of r2: ";
    cin >> r2;

    // Calculate the value of F using the corrected formula
    F = (1.0 / (4.0 * pai * e)) * (q1 * q2 / (r1 * r1)) * r2;

    // Output phase
    cout << "The value of F is: " << F << endl;

    return 0;
}
