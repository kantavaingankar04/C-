//Write a program to demonstrate multiple catch statement
//Kanta Vaingankar     22co24     Date:13/11/2023

#include <iostream>
#include <stdexcept>

using namespace std;

// Function to divide two numbers and handle exceptions
double safeDivision(int numerator, int denominator)
{
    if (denominator == 0)
    {
        throw runtime_error("Error: Divide by zero");
    }

    return static_cast<double>(numerator) / denominator;
}

int main()
{
    int numerator, denominator;

    // Get user input for numerator and denominator
    cout << "Enter numerator: ";
    cin >> numerator;

    cout << "Enter denominator: ";
    cin >> denominator;

    try
    {
        // Perform division and handle exceptions
        double result = safeDivision(numerator, denominator);
        cout << "Result of division: " << result << endl;
    } catch (const runtime_error& e)
    {
        // Catch runtime_error exceptions (divide by zero)
        cerr << "Runtime Error: " << e.what() << endl;
    } catch (const exception& e)
    {
        // Catch other exceptions
        cerr << "Exception caught: " << e.what() << endl;
    } catch (...)
    {
        // Catch any other unexpected exceptions
        cerr << "Unknown exception caught." << endl;
    }

    return 0;
}

