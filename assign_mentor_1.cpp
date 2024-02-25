#include <iostream>
#include <string>

using namespace std;

class Admin {
private:
    long int prn_no;
    int studentprn[10];
    int Facultyid;

public:

    Admin() {
        prn_no = 0;
        {
            studentprn[10] = 0;
        }
        Facultyid = 0;
    }

    // Function to assign mentor
    void assign_mentor() {
        int i=0;
        cout << "Enter Students PRN NOs.:" << endl;
        for(i=0;i<10;i++) {
            cout << "Enter PRN of student " << i+1 << ": ";
            cin >> studentprn[i];
            cout << endl;
        }
        cout << "Enter Mentor (Faculty) Id: ";
        cin >> Facultyid;
    }

    
    void display() {
        int i;
        cout << "The Mentor: " << Facultyid << endl;
        cout << "has been assigned to the following students: ";
        for(i=0; i<10; i++) {
            cout << studentprn[i] << " ";
        }
        cout << endl;
        //would be better if names were displayed
    }
};


int main() {
    Admin obj;
    obj.assign_mentor();
    obj.display(); 
    return 0;
}
