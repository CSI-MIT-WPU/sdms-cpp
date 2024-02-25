#include <iostream>
#include <string>

using namespace std;

class Student 
{
private:
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

public:
   Student(long prn, const string& name, int rno, float attendance, const string& panel,
            const string& address, long phone, const string& email, float ppsInternals,
            float ppsExternals, float dmgtInternals, float dmgtExternals,
            float beeeInternals, float beeeExternals) :
            PRN(prn), Name(name), Rno(rno), Attendance(attendance), Panel(panel),
            Address(address), phoneNumber(phone), Email(email), PPS_Internals(ppsInternals),
            PPS_Externals(ppsExternals), DMGT_Internals(dmgtInternals), DMGT_Externals(dmgtExternals),
            BEEE_Internals(beeeInternals), BEEE_Externals(beeeExternals)
    {}
    
    void addStudent() 
    {
        
    }

    
    bool feesPaid()  
    {
        
    }

    bool noBacks()  
    {
        
    }
    
    bool isEligible()  
    {
        
    }

    void searchStudent()  
    {
        
    }

    void printMarks()  
    {
 }
};