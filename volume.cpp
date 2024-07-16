#include <iostream>
#include <cmath>
using namespace std;

class Geometry {
public:
    // Calculate the volume of a cube
    double calculateVolume(double sideLength)
    {
        return pow(sideLength, 3);
    }

    // Calculate the volume of a cylinder
    double calculateVolume(double radius, double height)
    {
        return 3.14159265358979323846 * pow(radius, 2) * height;
    }
};

int main()
{
    Geometry geometry;

    int choice;
    cout << "Choose a shape to calculate its volume:" << endl;
    cout << "1. Cube" << endl;
    cout << "2. Cylinder" << endl;
    cin >> choice;

    switch (choice) {
        case 1:
            double cubeSideLength;
            cout << "Enter the side length of the cube: ";
            cin >> cubeSideLength;
            cout << "Volume of the cube: " << geometry.calculateVolume(cubeSideLength) << endl;
            break;
        case 2:
            double cylinderRadius, cylinderHeight;
            cout << "Enter the radius of the cylinder: ";
            cin >> cylinderRadius;
            cout << "Enter the height of the cylinder: ";
            cin >> cylinderHeight;
            cout << "Volume of the cylinder: " << geometry.calculateVolume(cylinderRadius, cylinderHeight) << endl;
            break;
        default:
            cout << "Invalid choice. Please select 1 or 2." << endl;
            break;
    }

    return 0;
}

