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


    bool nobacks(){
        int tempprn,i,j;
        float marks[6];
        bool status=true;
        student s;
        cout<<"enter prn of student\n";
        cin>>tempprn;
        for(i=0;i<101;i++){
            if (s.prn==tempprn)
            {
                marks[0]=s.PPS_Internals;
                marks[1]=s.PPS_Externals;
                marks[2]=s.DMGT_Internals;
                marks[3]=s.DMGT_Externals;
                marks[4]=s.BEEE_Internals;
                marks[5]=s.BEEE_Externals;
                
                for(j = 0; j < 6; j++){
                    if (j % 2 != 0) {
                        if (marks[j] < 16) {
                            status = false;
                            break;
                        }
                    }
                    else {
                        if (marks[j] < 24) {
                            status = false;
                            break;
                        }
                    }
                }
            }  
        }
        
        if (status)
            cout << "No backs in exams\n";
        else
            cout << "Backs found in exams\n";
        
        return status;
    }
};

int main(){
    student s;
    s.nobacks();
    return 0;
}
