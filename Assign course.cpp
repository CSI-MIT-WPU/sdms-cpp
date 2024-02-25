#include <iostream>
using namespace std;
int main() {
string courses[] = {"Discrete Mathematics with Graph Theory ", "fcasd", 
    "Programming and Problem Solving", "Chemistry ", "Engineering Mechanics ",
     "Linear Algebra and Differential Calculus ", "Physics","Biology for Engineers",
     "Engineering Graphics"};
    int numCourses = 9;
int choice;
 cout << "Enter your id: ";
cin>>choice;
switch(choice){
    case 1:
    cout<<"The course assigned to you is\n"<<courses[0]<<endl;
break;
case 2:
cout<<"the course assigned to you is\n"<<courses[1]<<endl;
break;
case 3:
cout<<"the course assigned to you is\n"<<courses[2]<<endl;
break;
case 4:
cout<<"the course assigned to you is\n"<<courses[3]<<endl;
break;
case 5:
cout<<"the course assigned to you is\n"<<courses[4]<<endl;
break;
case 6:
cout<<"the course assigned to you is\n"<<courses[5]<<endl;
break;
case 7:
cout<<"the course assigned to you is\n"<<courses[6]<<endl;
break;
case 8:
cout<<"the course assigned to you is\n"<<courses[7]<<endl;
break;
case 9:
cout<<"the course assigned to you is\n"<<courses[8]<<endl;
break;
case 10:
cout<<"the course assigned to you is\n"<<courses[9]<<endl;
break;

default:
cout << "Invalid id. Please enter a valid id.\n";
break;
}
return 0;
}
