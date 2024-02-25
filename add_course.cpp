#include <iostream>
#include <string>

using namespace std;

class Admin {
public:
    long int prn_no;
    string course[5];
    int i;

    void createStudent() {
        cout << "\nEnter your PRN: ";
        cin >> prn_no;
        cout<<"Enter the courses"<<endl;
        for(i=0;i<5;i++)
        {
            cout<<"Course "<<i+1<<":";
            cin>>course[i];
            cout<<endl;
        }

    
    }
};

int main() {
    Admin studentObj;
    int i;
    studentObj.createStudent();
    cout<<"Courses for student "<<studentObj.prn_no<<"are:"<<endl;
    for(i=0;i<5;i++)
        {
            cout<<"Course "<<i+1<<":";
            cout<<studentObj.course[i];
            cout<<endl;
        }

    


    return 0;
}