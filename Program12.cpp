/*write a menu driven program to find the area of triangle ,circle, square and rectangle.(use switch
case)

Kanta G. Vaingankar              22CO24*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
 {
    int choice;
    double area, side, length, width, base, height, radius;

    while (true)
        {
        cout<< "Choose an option:" << endl;
        cout << "1. Area of Triangle" << endl;
        cout << "2. Area of Circle" << endl;
        cout << "3. Area of Square" << endl;
        cout << "4. Area of Rectangle" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1/2/3/4/5): ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter the base of the triangle: ";
                cin >> base;

                cout << "Enter the height of the triangle: ";
                cin >> height;

                area = 0.5 * base * height;
                cout << "Area of the triangle: " << area << endl;
                break;

            case 2:
                cout << "Enter the radius of the circle: ";
                cin >> radius;

                area = 3.1415 * radius * radius;
                cout << "Area of the circle: " << area << endl;
                break;

            case 3:
                cout << "Enter the side length of the square: ";
                cin >> side;

                area = side * side;
                cout << "Area of the square: " << area << endl;
                break;

            case 4:
                cout << "Enter the length of the rectangle: ";
                cin >> length;

                cout << "Enter the width of the rectangle: ";
                cin >> width;

                area = length * width;
                cout << "Area of the rectangle: " << area << endl;
                break;

            case 5:
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option (1/2/3/4/5)." << endl;
                break;
        }
    }

    return 0;
}
