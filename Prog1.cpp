//Write a program to handle the divide by zero exception.
//Kanta Vaingankar    22co24    Date:13/11/2023


#include <iostream>
#include <stdexcept>

using namespace std;

int safeDivision(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw runtime_error("Error: Divide by zero");
    }

    return numerator / denominator;
}

int main() {
    int numerator, denominator;

    // Get user input for numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        // Perform division and handle exceptions
        int result = safeDivision(numerator, denominator);
        cout << "Result of division: " << result << endl;
    }
    catch (const runtime_error& e)
    {
        // Catch and handle the divide-by-zero exception
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
