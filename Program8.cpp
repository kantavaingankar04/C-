/*find median of an array of numbers (assume array is sorted)
Kanta G. Vaingankar              22CO24*/

#include <iostream>
using namespace std;
double findMedian(int arr[], int size)
{
    if (size % 2 != 0) {
        // If the number of elements is odd, return the middle element
        return arr[size / 2];
    } else {
        // If the number of elements is even, return the average of the two middle elements
        double median = (arr[(size - 1) / 2] + arr[size / 2]) / 2.0;
        return median;
    }
}

int main()
   {
    const int MAX_SIZE = 100; // Maximum size of the array
    int numbers[MAX_SIZE];
    int n; // Number of elements in the array

    // Input phase
    cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "Invalid input for the number of elements." << endl;
        return 1; // Exit the program with an error code
    }

    cout << "Enter " << n << " sorted numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    // Calculate the median
    double median = findMedian(numbers, n);

    // Output phase
    cout << "Median of the array: " << median << endl;

    return 0;
}
