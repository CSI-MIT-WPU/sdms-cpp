#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    std::string name;
    int cca;
    int lca;
    int midterm;
};

void displayInternalMarks(Student students[], int numStudents) {
    cout << "--------------------------------------------------------------" <<endl;
    cout << "|   Name   |   cca   |   lca   |  midterm |" <<endl;
    cout << "--------------------------------------------------------------" <<endl;

    for (int i = 0; i < numStudents; i++) {
        cout << "| " << students[i].name << " |   " << students[i].cca << "   |   " << students[i].lca << "   |   " << students[i].midterm << "   |" << endl;
    }

    cout << "--------------------------------------------------------------" << endl;
}

int main() {
    int numStudents,p;
    cout<<"Enter the no. of students"<<endl;
    cin>>numstudent;
    for (int p = 0; p < numStudents; p++)
      {
        cout<<"Enter student name:"<<endl;
        cin>>students[i].name;
        cout<<"Enter cca marks:"<<endl;
        cin>>students[i].cca;
        cout<<"Enter lca marks:"<<endl;
        cin>>students[i].lca;
        cout<<"Enter midterm marks:"<<endl;
        cin>>students[i].midterm;
      }
    displayInternalMarks(students, numStudents);

    return 0;
}
