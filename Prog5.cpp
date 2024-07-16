//Write a program to throw an exception if user enters a number outside the range [1-99].
//Kanta Vaingankar     22co24     Date:13/11/2023

#include <iostream>
#include <stdexcept>

using namespace std;

// Function to process user input and throw an exception if the number is outside the range
void processNumber(int number, int minRange, int maxRange)
{
    if (number < minRange || number > maxRange)
    {
        throw out_of_range("Error: Number outside the specified range");
    }

    // Process the number if it is within the range
    cout << "Number " << number << " is within the specified range." << endl;
}

int main()
{
    int userInput;
    const int minRange = 1;
    const int maxRange = 100;

    cout << "Enter a number within the range " << minRange << " to " << maxRange << ": ";

    try
    {
        cin >> userInput;
        processNumber(userInput, minRange, maxRange);
    } catch (const out_of_range& e)
    {
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}

