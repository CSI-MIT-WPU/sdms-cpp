#include <iostream>
#include <string>
using namespace std;

class student {
public:
    int prn;
    string name;
    int rollNo;
    int attendance;
    int panel;
    string address;
    int phoneNo;
    string emailId;
    int PPS_Internals;
    int PPS_Externals;
    int DMGT_Internals;
    int DMGT_Externals;
    int BEEE_Internals;
    int BEEE_Externals;


    void toviewprofile(){
        int tempprn,i,j,length;
        float marks[6];
        bool status=true;
        student s;
        // statement to calculate no. of student record from std
        // lenght=.......
        
        
        cout<<"enter prn of student\n";
        cin>>tempprn;
        for(i=0;i<length;i++){
            if (s.prn==tempprn)
            {
                cout<<"\nSTUDENT PROFILE";
                cout<<"\nPRN :"<<s.Prn;
                cout<<"\nname :"<<s.Name;
                cout<<"\nrno :"<<s.rno;
                cout<<"\nGender :"<<s.gender;
                cout<<"\nattendance :"<<s.attendace;
                cout<<"\npanel :"<<s.panel;
                cout<<"\nAddress :"<<s.Address;
                cout<<"\nPhoneNumber :"<<s.phoneNumber;
                status==false;
            }  
        }
        if (status)
            cout << "\nPRN not found";        
    }
};
