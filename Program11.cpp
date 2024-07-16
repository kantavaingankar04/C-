/*Write a menu driven program to determine if a given character is lowercase alphabet or uppercase
alphabet or any other number.(use switch case
Kanta G. Vaingankar              22CO24*/
#include <iostream>
#include <cctype> // For the std::islower, std::isupper, and std::isdigit functions
using namespace std;

int main() {
    char character;
    int choice;

    cout << "Enter a character: ";
    cin >> character;

    cout << "Choose an option:" << endl;
    cout << "1. Check if the character is lowercase alphabet" << endl;
    cout << "2. Check if the character is uppercase alphabet" << endl;
    cout << "3. Check if the character is any other number" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            if (islower(character))
            {
                cout << "The character is a lowercase alphabet." << endl;
            }
                else
                {
                    cout << "The character is not a lowercase alphabet." << endl;
                }
                break;

        case 2:
            if (isupper(character))
            {
                cout << "The character is an uppercase alphabet." << endl;
            }
                else
                {
                    cout << "The character is not an uppercase alphabet." << endl;
                }
                break;

        case 3:
            if (isdigit(character))
            {
                cout << "The character is a digit." << endl;
            }
                else
                {
                    cout << "The character is neither a lowercase alphabet nor an uppercase alphabet nor a digit." << endl;
                }
                break;

        default:
            cout << "Invalid choice. Please enter a valid option (1/2/3)." << endl;
            break;
    }

    return 0;
}
