#include <iostream>

using namespace std;

class CheckForScholarship {
private:
    float gpa;
    float jeemain;
    float cet;

public:
    CheckForScholarship(float student_gpa, float student_jeemain, float student_cet)
        : gpa(student_gpa), jeemain(student_jeemain), cet(student_cet) {}

    bool isEligibleForScholarship(string branch) const {
        if (branch == "B.TECH CS") {
            return (gpa >= 8.0 && (jeemain >= 96.0 || cet >= 98.0));
        } else if (branch == "B.TECH ENTC") {
            return (gpa >= 8.0 && (jeemain >= 95.0 || cet >= 96.0));
        } else if (branch == "B.TECH CIVIL" || branch == "B.TECH MECH") {
            return (gpa >= 8.0 && (jeemain >= 95.0 || cet >= 96.0));
        } else if (branch == "DIPLOMASTUD") {
            return (gpa >= 7.0 && (jeemain >= 90.0 || cet >= 90.0));
        } else {
            return false;
        }
    }
};

int main() {
    float student_gpa, student_jeemain, student_cet;
    
    cout << "Enter student's branch (e.g., B.TECH CS, B.TECH ENTC, B.TECH CIVIL, B.TECH MECH): ";
    string student_branch;
    getline(cin, student_branch);

    cout << "Student's GPA: ";
    cin >> student_gpa;

    cout << "JEE Main score: ";
    cin >> student_jeemain;

    cout << "STATECET score: ";
    cin >> student_cet;


    CheckForScholarship student(student_gpa, student_jeemain, student_cet);

    if (student.isEligibleForScholarship(student_branch)) {
        cout << "Student is eligible for a scholarship in the branch " << student_branch << ".\n";
    } else {
        cout << "Student does not meet the eligibility criteria for a scholarship in the branch " << student_branch << ".\n";
    }

    return 0;
}
