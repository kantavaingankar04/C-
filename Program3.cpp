/*print multiples of x between 0 to n, x,n -user inputs
Kanta G. Vaingankar              22CO24*/

#include <iostream>
using namespace std;

int main() {
    int x, n;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Multiples of " << x << " between 0 and " << n << " are:" << endl;

    for (int i = 0; i <= n; i++)
    {
        if (i % x == 0)
        {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}
