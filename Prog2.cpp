//Write a program to:
//a)To concatenate two strings
#include <iostream>
#include <string>

using namespace std;

// Function to concatenate two strings
string concatenateStrings(const string& first, const string& second)
{
    return first + second;
}

int main()
{
    // Get input strings from the user
    cout << "Enter the first string: ";
    string firstString;
    getline(cin, firstString);

    cout << "Enter the second string: ";
    string secondString;
    getline(cin, secondString);

    // Concatenate the strings
    string concatenatedString = concatenateStrings(firstString, secondString);

    // Display the concatenated string
    cout << "\nConcatenated String: " << concatenatedString << endl;

    return 0;
}
