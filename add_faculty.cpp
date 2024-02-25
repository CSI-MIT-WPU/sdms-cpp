#include <iostream>
#include <string>

using namespace std;

class Admin {
public:
    long int Faculty_id;
    int Salary;
    string name;
    string dateofBirth;
    char gender;

    void createFaculty() {
        cout << "\nEnter Faculty Id: ";
        cin >> Faculty_id;
        cout << "\nEnter name: ";
        cin >> name;
        cout << "\nEnterdate of birth (DD-MM-YYYY): ";
        cin >> dateofBirth;
        cout << "\nEnter gender (M/F): ";
        cin >> gender;
        cout << "\nEnter Salary: ";
        cin >> Salary;

    }
};

int main() {
    Admin obj;
    obj.createFaculty();

    cout << "\nFaculty Id: " << obj.Faculty_id<< "\nName: " << obj.name<< "\nDate of Birth: " << obj.dateofBirth<< "\nGender: " << obj.gender << endl<< "\nRoll Number: " << obj.Salary;

    return 0;
}