/*print quotient and remainder of a number
Kanta G. Vaingankar              22CO24*/

#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor;

    cout << "Enter the dividend: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;

    int quotient = dividend / divisor;
    int remainder = dividend % divisor;

    cout << "Quotient: " << quotient << endl;
    cout << "Remainder: " << remainder << endl;

    return 0;
}
