#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    string department;

public:
    // Constructor with default values
    Student() {
        name = "John Doe";
        age = 20;
        department = "Computer Science";
    }

    // Constructor with provided values
    Student(string n, int a, string dept) {
        name = n;
        age = a;
        department = dept;
    }

    // Member function to display student details
    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    // Create Student objects using different constructors
    Student student1; // Default constructor
    Student student2("Alice Smith", 22, "Electrical Engineering"); // Constructor with provided values

    // Display details of each student
    cout << "Student 1 Details:" << endl;
    student1.displayDetails();

    cout << "\nStudent 2 Details:" << endl;
    student2.displayDetails();

    return 0;
}

