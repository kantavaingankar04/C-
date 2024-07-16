//Write a program to implement binary search and bubble sort on an array.
//Kanta Vaingankar     22co24     Date:13/11/2023


#include <iostream>
using namespace std;

// Function to perform binary search on a sorted array
int binarySearch(const int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
        {
            return mid; // Element found, return its index
        }
        else if (arr[mid] < target)
        {
            left = mid + 1; // Target is in the right half
        }
         else
        {
            right = mid - 1; // Target is in the left half
        }
    }

    return -1; // Element not found
}

// Function to perform bubble sort on an array
void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j + 1] if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to display the elements of an array
void displayArray(const int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 8;
    int arr[size] = {29, 10, 14, 37, 13, 7, 52, 17};

    // Display the original array
    cout << "Original Array: ";
    displayArray(arr, size);

    // Sort the array using bubble sort
    bubbleSort(arr, size);
    cout << "Array after Bubble Sort: ";
    displayArray(arr, size);

    // Perform binary search on the sorted array
    int target;
    cout << "Enter the element to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);
    if (result != -1)
    {
        cout << "Element " << target << " found at index " << result << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array" << endl;
    }

    return 0;
}
