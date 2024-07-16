/*Create two class DM and DB which store the value distances. DM stores distances
in metres and centimetres and DB in feet and inches. Write a program that can
read values for the class objects and add one object of DM with another object of
DB. Use a friend function to carry out the addition operation. The object that
stores the results maybe a DM object or DB object, depending on the units in
which the results required. The display should be in the format of feet and inches
or metres and centimetres depending on the object on display.*/
//Kanta Vaingankar  22co24 Date:-
#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM
{
private:
    int meters;
    int centimeters;

public:
    DM() {
        meters = 0;
        centimeters = 0;
    }

    DM(int m, int cm)
    {
        meters = m;
        centimeters = cm;
    }

    void display()
    {
        cout << "Distance: " << meters << " meters " << centimeters << " centimeters" << endl;
    }

    friend DM addDistance(DM, DB);
};

class DB
{
private:
    int feet;
    int inches;

public:
    DB()
    {
        feet = 0;
        inches = 0;
    }

    DB(int f, int in)
    {
        feet = f;
        inches = in;
    }

    void display()
    {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }

    friend DM addDistance(DM, DB);
};

DM addDistance(DM dm, DB db)
{
    // Convert DB to DM (1 foot = 0.3048 meters, 1 inch = 0.0254 meters)
    int totalCentimeters = (dm.meters * 100 + dm.centimeters) + (db.feet * 30.48 + db.inches * 2.54);

    // Calculate meters and centimeters
    int newMeters = totalCentimeters / 100;
    int newCentimeters = totalCentimeters % 100;

    return DM(newMeters, newCentimeters);
}

int main() {
    DM dm1(2, 50); // 2 meters 50 centimeters
    DB db1(5, 10); // 5 feet 10 inches

    DM result = addDistance(dm1, db1);

    cout << "Result: ";
    result.display();

    return 0;
}

