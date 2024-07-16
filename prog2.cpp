//Write a program to handle array index out of bond exception.
//Kanta Vaingankar    22co24    Date:13/11/2023


#include <iostream>
#include <stdexcept>

using namespace std;

// Function to access an element in an array safely
int safeArrayAccess(const int arr[], int size, int index) {
    if (index < 0 || index >= size) {
        throw out_of_range("Error: Array index out of bounds");
    }

    return arr[index];
}

int main() {
    const int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};

    // Get user input for the array index
    cout << "Enter the array index: ";
    int index;
    cin >> index;

    try {
        // Access array element and handle exceptions
        int result = safeArrayAccess(arr, size, index);
        cout << "Element at index " << index << ": " << result << endl;
    } catch (const out_of_range& e) {
        // Catch and handle array index out of bounds exception
        cerr << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
