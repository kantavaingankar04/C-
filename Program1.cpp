/*find min of three numbers
Kanta G. Vaingankar              22CO24*/

#include<iostream>
using namespace std;

int findMin(int num1, int num2, int num3)
 {
    int minNum = num1;

    if (num2 < minNum)
    {
        minNum = num2;
    }

    if (num3 < minNum)
    {
        minNum = num3;
    }

    return minNum;
}

int main()
 {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int minNumber = findMin(num1, num2, num3);
    cout << "The minimum number is: " << minNumber << endl;

    return 0;
 }
