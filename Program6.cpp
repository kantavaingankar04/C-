/*to display percentage and grade of student using namespace defined in an external
Kanta G. Vaingankar              22CO24*/
// main.cpp

#include <iostream>
#include "grade_calculator.h"

using namespace std;
int GradeCalculator;

double calculatePercentage(double obtainedMarks, double totalMarks)
{
    return (obtainedMarks / totalMarks) * 100.0;
}

char calculateGrade(double percentage)
{
    if (percentage >= 90.0)
        return 'A';
    else if (percentage >= 80.0)
        return 'B';
    else if (percentage >= 70.0)
        return 'C';
    else if (percentage >= 60.0)
        return 'D';
    else
        return 'F';
}

int main()
{
    double obtainedMarks, totalMarks;

    cout << "Enter obtained marks: ";
    cin >> obtainedMarks;

    cout << "Enter total marks: ";
    cin >> totalMarks;

    double percentage = calculatePercentage(obtainedMarks, totalMarks);
    char grade = calculateGrade(percentage);

    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
