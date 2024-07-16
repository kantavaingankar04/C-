/*print average of an array of numbers
Kanta G. Vaingankar              22CO24*/

#include <iostream>
using namespace std;

int main()
{
    const int size = 5;
    int numbers[size];

    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++)
    {
        cin >> numbers[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    double average = static_cast<double>(sum) / size;

    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
