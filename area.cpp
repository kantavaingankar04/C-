#include <iostream>
#include <cmath>
using namespace std;

class Geometry
{
public:
    // Calculate the area of a circle
    double calculateArea(double radius)
    {
        return 3.14159265358979323846 * pow(radius, 2);
    }

    // Calculate the area of a triangle
    double calculateArea(double base, double height)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Geometry geometry;

    int choice;
    cout << "Choose a shape to calculate its area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Triangle" << endl;
    cin >> choice;

    switch (choice)
    {
        case 1:
            double circleRadius;
            cout << "Enter the radius of the circle: ";
            cin >> circleRadius;
            cout << "Area of the circle: " << geometry.calculateArea(circleRadius) << endl;
            break;
        case 2:
            double triangleBase, triangleHeight;
            cout << "Enter the base length of the triangle: ";
            cin >> triangleBase;
            cout << "Enter the height of the triangle: ";
            cin >> triangleHeight;
            cout << "Area of the triangle: " << geometry.calculateArea(triangleBase, triangleHeight) << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1 or 2." << endl;
            break;
    }

    return 0;
}

