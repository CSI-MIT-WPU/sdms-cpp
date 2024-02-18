#include <iostream>
#include <string>

using namespace std;

class Student {
public:
    long int prn_no;
    int roll_no;
    string name;
    string dateOfBirth;
    char gender;

    void createStudent() {
        cout << "\nEnter your PRN: ";
        cin >> prn_no;

        cout << "\nEnter your name: ";
        cin >> name;

        cout << "\nEnter your roll number: ";
        cin >> roll_no;

        cout << "\nEnter your date of birth (YYYY-MM-DD): ";
        cin >> dateOfBirth;

        cout << "\nEnter your gender (M/F): ";
        cin >> gender;
    }
};

int main() {
    Student studentObj;
    studentObj.createStudent();

    cout << "\nPRN: " << studentObj.prn_no
         << "\nName: " << studentObj.name
         << "\nRoll Number: " << studentObj.roll_no
         << "\nDate of Birth: " << studentObj.dateOfBirth
         << "\nGender: " << studentObj.gender << endl;

    return 0;
}
