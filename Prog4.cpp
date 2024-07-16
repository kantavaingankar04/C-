//Write a program to implement rethrowing on an exception.
//Kanta Vaingankar     22co24     Date:13/11/2023

#include <iostream>
#include <stdexcept>
using namespace std;

void innerFunction()
{
    try
    {
        // Simulating an exception
        throw runtime_error("Exception occurred in innerFunction()");
    } catch (const runtime_error& e)
    {
        cout << "Caught exception in innerFunction(): " << e.what() << endl;

        // Rethrowing the caught exception
        throw;  // Re-throws the same exception to the calling function
    }
}

void outerFunction()
{
    try
    {
        innerFunction();
    } catch (const runtime_error& e)
    {
        cout << "Caught exception in outerFunction(): " << e.what() << endl;
        // Perform additional handling or log the exception
    }
}

int main()
{
    try
    {
        outerFunction();
    } catch (const runtime_error& e)
    {
        cout << "Caught exception in main(): " << e.what() << endl;
        // Additional handling in the main function
    }

    return 0;
}
