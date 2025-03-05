#include <iostream>
using namespace std;

// Function to calculate grade points
float calculateGradePoints(char grade) {
    switch (grade) {
        case 'A':
            return 4.0;
        case 'B':
            return 3.0;
        case 'C':
            return 2.0;
        case 'D':
            return 1.0;
        case 'F':
            return 0.0;
        default:
            return 0.0;
    }
}

int main() {
    int numCourses;
    float totalCredits = 0.0;
    float totalGradePoints = 0.0;

    cout << "Enter the number of courses: ";
    cin >> numCourses;

    for (int i = 0; i < numCourses; i++) {
        char grade;
        float credits;

        cout << "Enter the grade for course " << i + 1 << ": ";
        cin >> grade;
        cout << "Enter the credits for course " << i + 1 << ": ";
        cin >> credits;

        float gradePoints = calculateGradePoints(grade);
        totalCredits += credits;
        totalGradePoints += gradePoints * credits;

        cout << "Grade for course " << i + 1 << ": " << grade << endl;
        cout << "Grade points for course " << i + 1 << ": " << gradePoints << endl;
        cout << endl;
    }

    float gpa = totalGradePoints / totalCredits;
    float cgpa = totalGradePoints / totalCredits;

    cout << "Total credits: " << totalCredits << endl;
    cout << "Total grade points: " << totalGradePoints << endl;
    cout << "GPA: " << gpa << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}
