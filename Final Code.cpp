#include <iostream>
#include <string>
#include <map>
/*#include<mysql.h>
#include<mysqld_error.h>
char HOST[]="localhost";
char USER[]="root";
char PASS[]="your_password";*/

using namespace std;
class Admin 
{
public:
    long int Faculty_id;
    int Salary;
    string name;
    string dateofBirth;
    char gender;
    long studentprn[10000]; // Added studentprn array
    void createFaculty();
    void assign_mentor();
};

void Admin::createFaculty() 
{
    cout << "\nEnter Faculty Id: ";
    cin >> Faculty_id;
    cout << "\nEnter name: ";
    cin >> name;
    cout << "\nEnter date of birth (DD-MM-YYYY): ";
    cin >> dateofBirth;
    cout << "\nEnter gender (M/F): ";
    cin >> gender;
    cout << "\nEnter Salary: ";
    cin >> Salary;
}

void Admin::assign_mentor() 
{
    int i = 0;
    cout << "\nEnter Students PRN NOs.:" << endl;
    for (i = 0; i < 10; i++) 
    {
        cout << "\nEnter PRN of student " << i + 1 << ": ";
        cin >> studentprn[i];
        cout << endl;
    }
    cout << "\nEnter Mentor (Faculty) Id: ";
    cin >> Faculty_id;
    cout << "\nThe Mentor: " << Faculty_id << endl;
    cout << "has been assigned to the following students: ";
    for (i = 0; i < 10; i++) 
    {
        cout << studentprn[i] << "\n";
        cout << endl;
    }
}

class Student 
{
public:
    long prn_no;
    string name;
    int roll_no;
    string dateOfBirth;
    char gender;
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
    int courseYear;
    int amountPaid;
    string courses[10];
    // float subs[6] = {PPS_Internals, PPS_Externals, DMGT_Internals, DMGT_Externals, BEEE_Internals, BEEE_Externals};

    bool feesPaid();
    bool noBacks();
    bool isEligible();
    void printMarks();
    void updateData(Student&);
    void toviewprofile();
    void display_course();
};

bool Student :: feesPaid()  
    {
    if (courseYear == 1 && amountPaid >= 350000 )
            {
            cout << "Fees for 1st year have been paid.\n" << endl;
            }
    else if (courseYear == 2 && amountPaid >= 700000 ) 
            {
            cout << "Fees for 2nd year have been paid.\n" << endl;
            } 
    else if (courseYear == 3 && amountPaid >= 1050000) 
            {
            cout << "Fees for 3rd year have been paid.\n" << endl;
            } 
    else if (courseYear == 4 && amountPaid >= 1400000) 
            {
            cout << "Fees for 4th year have been paid.\n" << endl;
            }
    else 
            {
            cout << "Fees for year " << courseYear << " have not been paid.\n" << endl;
             }   
    }
bool Student :: noBacks()  
    {
        int i;
        map<int, float> marks;  //change int,int to int,float
        marks[0] = PPS_Internals;
        marks[1] = PPS_Externals;
        marks[2] = DMGT_Internals;
        marks[3] = DMGT_Externals;
        marks[4] = BEEE_Internals;
        marks[5] = BEEE_Externals;
        
        float subs[6] = {PPS_Internals, PPS_Externals, DMGT_Internals, DMGT_Externals, BEEE_Internals, BEEE_Externals};
        cout<<"\nSubjects student has backs in :";
        bool status = true;  
        for(i=0;i<6;i++)
         {
            if(i % 2 != 0) 
             { 
                if(marks[i] < 16) 
                 {
                    cout<<subs[i]<<endl;
                    status = false;
                 }
             } 
            else 
             { 
                if(marks[i] < 24)
                 {
                    cout<<subs[i]<<endl;
                    status = false;
                 }
            }        
        }
        return status;   
    }

/*bool Student :: isEligible(Student& studentObj)  //access internalscore???instead of asking
    {
      return(Internalscore >= 60.0f); //rewrite 
    }
*/

bool Student :: isEligible()  
{
    if (PPS_Internals >= 40 && DMGT_Internals >= 40 && BEEE_Internals >= 40) 
    {
        return true;
    } 
    else 
    {
        return false;
    }
}

/*void Student :: searchStudent(long prn)  
    {
      for(i=0, i<n; i++)
        {
          if(prn == studentObj.prn_no[i])
            {
            cout<<"Prn found"<<endl;
            cout << "\nPRN: " <<    studentObj.prn_no[i]
            << "\nName: " << studentObj.name
            << "\nRoll Number: " << studentObj.roll_no[i]
            << "\nDate of Birth: " << studentObj.dateOfBirth[i]
            << "\nGender: " << studentObj.gender[i] << endl;
            }
        }   
    }
*/

void Student :: printMarks()  
    {   
     	cout<<"The internal marks for PPS are :\n"<<PPS_Internals;
      	cout<<"The external marks for PPS are :\n"<<PPS_Externals;
      	cout<<"The internal marks for DMGT are :\n"<<DMGT_Internals;
	    cout<<"The external marks for DMGT are :\n"<<DMGT_Externals;
	    cout<<"The internal marks for BEEE are :\n"<<BEEE_Internals;
	    cout<<"The external marks for BEEE are :\n"<<BEEE_Externals;
    } 

void Student :: updateData(Student& s1)
{
int code;
cout<<"Select the field to be updated. Enter the correct code\n";
cout<<"\n 1.PRN\n 2.Name\n 3.Roll No.\n 4.Attendance\n 5.Panel\n 6.Address\n 7.Phone Number\n 8.Email Id\n 9.Internal marks for PPS\n 10.External marks for PPS\n 11.Internal marks for DMGT\n 12.External marks for DMGT\n 13.Internal marks for BEEE\n 14.External marks for BEEE";
cin >> code;
switch(code)
{
case 1:
	cout<<"Enter new PRN :";
    cin>> s1.prn_no;
	break;
case 2:
	cout<<"Enter Name :";
    cin>>s1.name;
	break;
case 3:
	cout<<"Enter new Roll No. :";
    cin>>s1.roll_no;
	break;
case 4:
	cout<<"Enter Attendance";
    cin>>s1.Attendance;
	break;
case 5:
	cout<<"Enter Panel :";
    cin>>s1.Panel;
	break;
case 6:
	cout<<"Enter new Address :";
    cin>>s1.Address;
	break;
case 7:
	cout<<"Enter new Phone Number :";
    cin>>s1.phoneNumber;
	break;
case 8:
	cout<<"Enter new Email Id :";
    cin>>s1.Email;
	break;
case 9:
	cout<<"Enter internal marks for PPS : ";
    cin>>s1.PPS_Internals;
	break;
case 10:
	cout<<"Enter external marks for PPS : ";
    cin>>s1.PPS_Externals;
	break;
case 11:
	cout<<"Enter internal marks for DMGT : ";
    cin>>s1.DMGT_Internals;
	break;
case 12:
	cout<<"Enter external marks for DMGT : ";
    cin>>s1.DMGT_Externals;
	break;
case 13:
	cout<<"Enter internal marks for BEEE : ";
    cin>>s1.BEEE_Internals;
	break;
case 14:
	cout<<"Enter external marks for BEEE : ";
    cin>>s1.BEEE_Externals;
	break;
default:
	cout<<"Enter valid code :";
}
}

void Student :: toviewprofile()
    {
        int tempprn,i,j,length;
        bool status=true;
        
        // statement to calculate no. of student record from std
        // length=.......
	
	Student s;
        cout<<"enter prn of student\n";
        cin>>prn_no;
        for(i=0;i<length;i++) 
        {
            if(s.prn_no==prn_no)
            {
                cout<<"\nSTUDENT PROFILE";
                cout<<"\nPRN :"<<s.prn_no;
                cout<<"\nname :"<<s.name;
                cout<<"\nrno :"<<s.roll_no;
                cout<<"\nGender :"<<s.gender;
                cout<<"\nattendance :"<<s.Attendance;
                cout<<"\npanel :"<<s.Panel;
                cout<<"\nAddress :"<<s.Address;
                cout<<"\nPhoneNumber :"<<s.phoneNumber;
                status==false;
            }  
        }
        if(status)
            cout << "\nPRN not found";        
    }
void Student :: display_course() //courses does not match??  //maybe make array of courses and store in attribute courses
    {
        courses[0] = "Discrete Mathematics with Graph Theory"; //check lenght of array??
        courses[1] = "fcasd";
        courses[2] = "Programming and Problem Solving";
        courses[3] = "Chemistry";
        courses[4] = "Engineering Mechanics";
        courses[5] = "Linear Algebra and Differential Calculus";
        courses[6] = "Physics";
        courses[7] = "Biology for Engineers";
        courses[8] = "Engineering Graphics";

        // Displaying the list of courses
        cout << "Courses offered:" << endl;
        for (int i = 0; i < 9; ++i) 
        {
            cout << i + 1 << ". " << courses[i] << endl;
        }
    }

class Faculty 
{
public:
    long int prn_no;
    int roll_no;
    string name;
    string dateOfBirth;
    char gender;
    string courses[10];

    void createStudent(Student&);
    void assignCourse(int id);
    void searchstud(Student& ,long prn);
};

// void Faculty::createStudent(Student& studentObj) //make structures and rewrite this code
// {
//     cout << "\nEnter your PRN: ";
//     cin >> prn_no;
//     cout << "\nEnter your name: ";
//     cin >> name;
//     cout << "\nEnter your roll number: ";
//     cin >> roll_no;
//     cout << "\nEnter your date of birth (DD-MM-YYYY): ";
//     cin >> dateOfBirth;
//     cout << "\nEnter your gender (M/F): ";
//     cin >> gender;
// }

// NEW CODE 

void Faculty::createStudent(Student& studentObj) 
{
    cout << "Enter student details:" << endl;
    cout << "PRN: ";
    cin >> studentObj.prn_no;
    cout << "Name: ";
    cin >> studentObj.name;
    cout << "Roll Number: ";
    cin >> studentObj.roll_no;
    cout << "Date of Birth (DD-MM-YYYY): ";
    cin >> studentObj.dateOfBirth;
    cout << "Gender (M/F): ";
    cin >> studentObj.gender;
    cout << "Marks in PPS Externals : ";
    cin >> studentObj.PPS_Externals;
    cout << "Marks in PPS Internals : ";
    cin >> studentObj.PPS_Internals;
    cout << "Marks in DMGT Externals : ";
    cin >> studentObj.DMGT_Externals;
    cout << "Marks in DMGT Internals : ";
    cin >> studentObj.DMGT_Internals;
    cout << "Marks in BEEE Externals : ";
    cin >> studentObj.BEEE_Externals;
    cout << "Marks in BEEE Internals : ";
    cin >> studentObj.BEEE_Internals; 
}

void Faculty::assignCourse(int id) 
{
    /*if (id >= 1 && id <= numCourses)
    {
    	cout << "The course assigned to you is\n" << courses[id - 1] << std::endl;
    }
    else
    {
    	cout << "Invalid id. Please enter a valid id between 1-9\n";
    }*/
    int i;
    cout<<"\nEnter Student PRN :";
    cin>>prn_no;
    cout<<"\nEnter The courses :";
    for(i=0;i<6;i++)  //amay
    {
        cout<<"\nCourse "<< i+1<<":";
        cin>>courses[i];
    }
        cout<<"\nThe Following courses are assigned to the PRN "<<prn_no;
    for(i=0;i<5;i++)
    {
        cout<<"\nCourse "<< i+1<<":";
        cout<<courses[i];
    }
}

// void Faculty::searchstud(Student& studentObj,long prn) //ask daanish 
// {
//     for(int i=0; i < n; i++) 
//     {
//         if(prn == studentObj.prn_no[i])
//         {
//             cout<<"Prn found"<<endl;
//             cout << "\nPRN: "<<studentObj.prn_no[i]<<"\nName: "<<studentObj.name<<"\nRoll Number: "<<studentObj.roll_no[i]<<"\nDate of Birth: "<<studentObj.dateOfBirth[i]<< "\nGender: "<< studentObj.gender[i] << endl;
//         }
//     }
// }

//  NEW CODE 

void Faculty::searchstud(Student& studentObj, long prn) 
{
    if (prn == studentObj.prn_no) 
    {
        cout << "PRN found:" << endl;
        cout << "PRN: " << studentObj.prn_no << endl;
        cout << "Name: " << studentObj.name << endl;
        cout << "Roll Number: " << studentObj.roll_no << endl;
        cout << "Date of Birth: " << studentObj.dateOfBirth << endl;
        cout << "Gender: " << studentObj.gender << endl;
    } 
    else 
    {
        cout << "PRN not found." << endl;
    }
}

int main() 
{
    Admin a1;
    Faculty f1;
    Student s1;
    int choice, x, flag=1;
    do
    {
        cout << "You are a :\n";
    cout << "\n 1.Admin\n 2.Faculty\n 3.Student\n";
    cin >> choice;
    switch (choice) 
{
    case 1:
        cout << "Enter the action you want to perform :\n1. Create Faculty\n2. Assign mentor";
        cin >> x;
        switch (x) 
	{
        case 1:
            a1.createFaculty();
            break;
        case 2:
            a1.assign_mentor();
            break;
        default:
            cout << "not a correct choice";
        }
        break;
    case 2:
        cout << "Enter the action you want to perform :\n1. Create student\n2. Assign course\n3. Search student\n4. Add Student";
        cin >> x;
        switch (x) 
	{
        case 1:
            f1.createStudent(s1);
            break;
        case 2:
            f1.assignCourse(1); // Assuming an id is passed
            break;
        case 3:
            f1.searchstud(s1,1234567890); // Assuming a prn is passed
            break;
        default:
            cout << "not a correct choice";
        }
        break;
    case 3:
        cout << "Enter the action you want to perform :\n1. Check fee status\n2. Check backs status\n3. Check eligibility\n4. Print marks\n5. Update data\n6. View profile\n7. Display courses";
        cin >> x;
        switch (x) {
        case 1:
            s1.feesPaid();
            break;
        case 2:
            s1.noBacks();
            break;
        case 3:
            s1.isEligible();
            break;
        case 4:
            s1.printMarks();
            break;
        case 5:
            s1.updateData(s1);
            break;
        case 6:
            s1.toviewprofile();
            break;
        case 7:
            s1.display_course();
            break;
        default:
            cout << "not a correct choice";
        }
        break;
}
    cout<<"Do you want to continue accessing the system? (Y:1, N:0) \n";
    cin>>flag;
    } 
    while (flag);   //added a do while loop
    return 0;
}
