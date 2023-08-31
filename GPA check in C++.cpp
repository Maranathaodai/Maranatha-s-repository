#include <iostream>
using namespace std;
int main() {
    string course;
    int exams_score;
    char grade;
    int credit_hours;
    double GPA;
    credit_hours = 3;

    cout << "Enter your course name: ";
    cin >> course;
    cout << "Enter your exams score: ";
    cin >> exams_score;
    if (exams_score >= 90 && exams_score <= 100) {
        grade = 'A';
        GPA = 4.0;
    }
     else if (exams_score >= 80 && exams_score <= 89) {
        grade = 'B';
        GPA = 3.0;
    } 
    else if (exams_score >= 70 && exams_score <= 79) {
        grade = 'C';
        GPA = 2.0;
    } 
    else if (exams_score >= 60 && exams_score <= 69) {
        grade = 'D';
        GPA = 1.0;
    } 
    else if (exams_score >= 0 && exams_score <= 59) {
        grade = 'F';
        GPA = 0.0;

    }
    else{
        "Enter a valid input.";
    }

    cout << "Grade: " << grade << '\n';
    cout << "GPA: " << GPA << '\n';
    cout << "Credit hours: " << credit_hours;
    return 0;
}