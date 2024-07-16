/*to display percentage and grade of student using namespace defined in an external
Kanta G. Vaingankar              22CO24*/
#define GRADE_CALCULATOR_H
#ifndef GRADE_CALCULATOR_H
namespace GradeCalculator {
    double calculatePercentage(double obtainedMarks, double totalMarks);
    char calculateGrade(double percentage);
}

#endif
