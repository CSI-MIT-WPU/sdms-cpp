UPDATE INFORMATION:

void updateData()
{
int code;
student s1;
cout<<"Select the field to be updated. Enter the correct code\n";
cout<<"\n 1.PRN
 \n 2.Name
 \n 3.Roll No.
 \n 4.Attendance
 \n 5.Panel
 \n 6.Address
 \n 7.Phone Number
 \n 8.Email Id
 \n 9.Internal marks for PPS
 \n 10.External marks for PPS
 \n 11.Internal marks for DMGT
 \n 12.External marks for DMGT
 \n 13.Internal marks for BEEE
 \n 14.External marks for BEEE"
cin>> code;
switch(code)
{
case 1:
	cin>>"Enter new PRN :">>s1.prn;
	break;
case 2:
	cin>>"Enter Name :">>s1.name;
	break;
case 3:
	cin>>"Enter new Roll No. :">>s1.RollNo;
	break;
case 4:
	cin>>"Enter Attendance">>s1.attendance;
	break;
case 5:
	cin>>"Enter Panel :">>s1.panel;
	break;
case 6:
	cin>>"Enter new Address :">>s1.address;
	break;
case 7:
	cin>>"Enter new Phone Number :">>s1.PhoneNo;
	break;
case 8:
	cin>>"Enter new Email Id :">>s1.emailid;
	break;
case 9:
	cin>>"Enter internal marks for PPS : ">>s1.internalpps;
	break;
case 10:
	cin>>"Enter external marks for PPS : ">>s1.externalpps;
	break;
case 11:
	cin>>"Enter internal marks for DMGT : ">>s1.internaldmgt;
	break;
case 12:
	cin>>"Enter external marks for DMGT : ">>s1.externaldmgt;
	break;
case 13:
	cin>>"Enter internal marks for BEEE : ">>s1.internalbeee;
	break;
case 14:
	cin>>"Enter external marks for BEEE : ">>s1.externalpps;
	break;
default:
	cout<<"Enter valid code :";
}
}
