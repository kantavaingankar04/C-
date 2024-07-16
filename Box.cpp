/*Create a class called Box with data member length, breadth and height. Use setter and getter function and display the volume and surface area of different box objects
22CO24 Kanta Vaingankar 31/08/2023*/

#include <iostream>
using namespace std;

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    // Setter function to set the dimensions of the box
    void setDimensions(double l, double b, double h)
    {
        length = l;
        breadth = b;
        height = h;
    }

    // Getter function to retrieve the length of the box
    double getLength() const
    {
        return length;
    }

    // Getter function to retrieve the breadth of the box
    double getBreadth() const
    {
        return breadth;
    }

    // Getter function to retrieve the height of the box
    double getHeight() const
    {
        return height;
    }

    // Calculate and return the volume of the box
    double calculateVolume() const
    {
        return length * breadth * height;
    }

    // Calculate and return the surface area of the box
    double calculateSurfaceArea() const
    {
        return 2 * (length * breadth + length * height + breadth * height);
    }
};

int main()
{
    double length, breadth, height;

    // Input dimensions for the first box
    cout << "Enter dimensions for Box 1:\n";
    cout << "Length: ";
    cin >> length;
    cout << "Breadth: ";
    cin >> breadth;
    cout << "Height: ";
    cin >> height;

    // Create Box 1 and set its dimensions
    Box box1;
    box1.setDimensions(length, breadth, height);

    // Input dimensions for the second box
    cout << "\nEnter dimensions for Box 2:\n";
    cout << "Length: ";
    cin >> length;
    cout << "Breadth: ";
    cin >> breadth;
    cout << "Height: ";
    cin >> height;

    // Create Box 2 and set its dimensions
    Box box2;
    box2.setDimensions(length, breadth, height);

    // Display the volume and surface area of both boxes
    cout << "\nBox 1 Volume: " << box1.calculateVolume() << endl;
    cout << "Box 1 Surface Area: " << box1.calculateSurfaceArea() << endl;
    cout << "Box 2 Volume: " << box2.calculateVolume() << endl;
    cout << "Box 2 Surface Area: " << box2.calculateSurfaceArea() << endl;

    return 0;
}
