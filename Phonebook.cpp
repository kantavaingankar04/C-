/*Write a program to implement a class called Phonebook. It should contain the correct name and contact number and include member functions to initialize the data members (use setter and getter function). Use an array of object to display contact list.
 22CO24 Kanta Vaingankar 31/08/2023*/

#include <iostream>
#include <string>
using namespace std;

const int MAX_CONTACTS = 100; // Maximum number of contacts

class Phonebook
{
private:
    string contactName;
    string contactNumber;

public:
    // Setter function to initialize contact information
    void setContactInfo(const string &name, const string &number)
    {
        contactName = name;
        contactNumber = number;
    }

    // Getter function to retrieve contact name
    string getContactName() const
    {
        return contactName;
    }

    // Getter function to retrieve contact number
    string getContactNumber() const
    {
        return contactNumber;
    }
};

int main()
{
    Phonebook contacts[MAX_CONTACTS]; // Array of Phonebook objects
    int numContacts = 0; // Number of contacts currently in the phonebook

    // Add contacts to the phonebook
    while (true)
        {
        string name, number;

        cout << "Enter contact name (or 'quit' to exit): ";
        cin >> name;

        if (name == "quit")
        {
            break;
        }

        cout << "Enter contact number: ";
        cin >> number;

        // Create a new Phonebook object and set contact information
        contacts[numContacts].setContactInfo(name, number);
        numContacts++;
    }

    // Display the contact list
    cout << "\nContact List:\n";
    for (int i = 0; i < numContacts; ++i)
    {
        cout << "Name: " << contacts[i].getContactName() << "\n";
        cout << "Number: " << contacts[i].getContactNumber() << "\n";
    }

    return 0;
}

