/*print min,max and average of an array of numbers
Kanta G. Vaingankar      22CO24*/

#include <iostream>
using namespace std;

const int MAX_SIZE = 100; // Maximum size of the array

int main()
 {
    int numbers[MAX_SIZE];
    int n; // Number of elements in the array
    double sum = 0.0, average;
    int minimum, maximum;

    // Input phase
    cout << "Enter the number of elements (up to " << MAX_SIZE << "): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE)
    {
        cout << "Invalid input for the number of elements." <<endl;
        return 1; // Exit the program with an error code
    }

    cout << "Enter " << n << " numbers:" <<endl;
    for (int i = 0; i < n; ++i)
        {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];

        // For the first number, initialize minimum and maximum with its value
        if (i == 0)
        {
            minimum = maximum = numbers[i];
        }
        else
            {
            // Update minimum and maximum values as we read more numbers
            if (numbers[i] < minimum)
            {
                minimum = numbers[i];
            }
            if (numbers[i] > maximum)
            {
                maximum = numbers[i];
            }
        }
    }

    // Calculate the average
    average = sum / n;

    // Output phase
    cout << "Average of entered numbers: " << average << endl;
    cout << "Minimum value: " << minimum << endl;
    cout << "Maximum value: " << maximum << endl;

    return 0;
}
