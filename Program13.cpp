/*write a program using an if-elseif ladder to display the age category for a given age(age-user input should be taken)
Kanta G. Vaingankar              22CO24*/
#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age < 0)
    {
        cout << "Invalid age. Age cannot be negative." << endl;
    }
    else if (age < 18)
        {
            cout << "You are a minor." << endl;
        }
    else if (age >= 18 && age < 60)
        {
            cout << "You are an adult." << endl;
        }
    else
        {
            cout << "You are a senior citizen." << endl;
        }

    return 0;
}






