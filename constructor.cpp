// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>

using namespace std;

class Student 
{
public:
    long PRN;
    string Name;
    int Rno;
    float Attendance;
    string Panel;
    string Address;
    long phoneNumber;
    string Email;
    float PPS_Internals;
    float PPS_Externals;
    float DMGT_Internals;
    float DMGT_Externals;
    float BEEE_Internals;
    float BEEE_Externals;


   Student()
    {    
PRN=0;
Name=" ";
Rno=0;
Attendance=0;
Panel=" ";
Address=" ";
phoneNumber=0;
Email=" ";
PPS_Internals=0;
PPS_Externals=0;
DMGT_Internals=0;
DMGT_Externals=0;
BEEE_Internals=0;
BEEE_Externals=0;
    }
    
  
};
int main() {

    Student obj;
    cout<<obj.Rno;


    return 0;
}
