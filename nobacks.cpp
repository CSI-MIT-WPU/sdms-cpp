#include<iostream>
#include <string>
#include<map>

using namespace std;

class student{
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

    bool nobacks() {
        int i;
        map<string, int> marks;
        marks["PPS_Internals"] = PPS_Internals;
        marks["PPS_Externals"] = PPS_Externals;
        marks["DMGT_Internals"] = DMGT_Internals;
        marks["DMGT_Externals"] = DMGT_Externals;
        marks["BEEE_Internals"] = BEEE_Internals;
        marks["BEEE_Externals"] = BEEE_Externals;
        
        int subs[6] = {PPS_Internals, PPS_Externals, DMGT_Internals, DMGT_Externals, BEEE_Internals, BEEE_Externals};
        cout<<"\nSubjects student has backs:";
        bool status = true;  
        for (i=0;i<6;i++){
            if (i % 2 != 0) { 
                if (marks[subs[i]] < 16) {
                    cout<<subs[i]<<endl;
                    status = false;
                }
            } 
            else { 
                if (marks[subs[i]] < 24){
                    cout<<subs[i]<<endl;
                    status = false;
                }
            }        
        }
        return status;
    }
};
int main() {
    int tempPrn;
    cout << "\nEnter PRN of student: ";    
    student s;
    cin >>tempPrn;
    if (s.nobacks()) {
        cout << "\nNONE";
    } 
    return 0;
}
