#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    float gpa;
    float jee;
    float cet;
    string branch;
};

bool EligibleForScholarship(const Student student) {
    const string branch = student.branch;
    float gpa = student.gpa;
    float jee = student.jee;
    float cet = student.cet;

    return 
        (branch == "B.TECH CS" && gpa >= 8.0 && (jee >= 96.0 || cet >= 98.0)) ||
        ((branch == "B.TECH ENTC" || branch == "B.TECH CIVIL" || branch == "B.TECH MECH") && gpa >= 8.0 && (jee >= 95.0 || cet >= 96.0)) ||
        (branch == "DIPLOMASTUD" && gpa >= 7.0 && (jee >= 90.0 || cet >= 90.0));
}

int main() {
    Student student;

    cout << "Enter the student's branch: ";
    cin >> student.branch;

    cout << "Enter JEE score: ";
    cin >> student.jee;

    cout << "Enter CET score: ";
    cin >> student.cet;

    cout << "Enter GPA: ";
    cin >> student.gpa;

    if (EligibleForScholarship(student)) {
        cout << "Eligible for a scholarship." << endl;
    } else {
        cout << "Not eligible for a scholarship." << endl;
    }

    return 0;
}
