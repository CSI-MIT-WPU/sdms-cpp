#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    float gpa;
    float jeemain;
    float cet;
    string branch;

public:
   
    Student(float student_gpa, float student_jeemain, float student_cet, const string& student_branch)
        : gpa(student_gpa), jeemain(student_jeemain), cet(student_cet), branch(student_branch) {}

    string getBranch() const {
        return branch;
    }

    float getGPA() const {
        return gpa;
    }

    float getJEEMainScore() const {
        return jeemain;
    }

    float getCETScore() const {
        return cet;
    }
};

class ScholarshipChecker {
public:
    bool isEligibleForScholarship(const Student& student) const {
        const string& branch = student.getBranch();
        float gpa = student.getGPA();
        float jeemain = student.getJEEMainScore();
        float cet = student.getCETScore();

        if ((branch == "B.TECH CS" && gpa >= 8.0 && (jeemain >= 96.0 || cet >= 98.0)) ||
            ((branch == "B.TECH ENTC" || branch == "B.TECH CIVIL" || branch == "B.TECH MECH") && gpa >= 8.0 && (jeemain >= 95.0 || cet >= 96.0)) ||
            (branch == "DIPLOMASTUD" && gpa >= 7.0 && (jeemain >= 90.0 || cet >= 90.0))) {
            return true;
        }

        return false;
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

    Student student(student_gpa, student_jeemain, student_cet, student_branch);

    ScholarshipChecker scholarshipChecker;

    if (scholarshipChecker.isEligibleForScholarship(student)) {
        cout << "Student is eligible for a scholarship in the branch " << student.getBranch() << ".\n";
    } else {
        cout << "Student does not meet the eligibility criteria for a scholarship in the branch " << student.getBranch() <<"./n";
    }

    return 0;
}
