FACULTY AND STUDENT LINKING:

class faculty
{
public:
int f_code;
}

class student
{
public:
int f_code;
int s_id;
}

int main()
{
int code, i;
student s_array[25];
s_array[0].f_code=001;
s_array[0].s_id=1;

s_array[1].f_code=002;
s_array[1].s_id=2;

s_array[2].f_code=003;
s_array[2].s_id=3;

s_array[3].f_code=004;
s_array[3].s_id=4;

cin>>"Enter faculty code :">>code;
for(i=0;i<25;i++)
{
	if(s_array[i].f_code == code)
	{
		cout<< "student details are : "<<s_array[i].s_id;
	}
}
retutn 0;
}
