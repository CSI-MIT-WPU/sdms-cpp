#include <iostream>
#include <limits>
using namespace std;

class BtechCourses {
private:
    const int MAX_COURSES = 20;
    string courses[20];
    int numCourses;

public:
    BtechCourses() : numCourses(9) {
        
        courses[0] = "Discrete Mathematics with Graph Theory";
        courses[1] = "fcasd";
        courses[2] = "Programming and Problem Solving";
        courses[3] = "Chemistry";
        courses[4] = "Engineering Mechanics";
        courses[5] = "Linear Algebra and Differential Calculus";
        courses[6] = "Physics";
        courses[7] = "Biology for Engineers";
        courses[8] = "Engineering Graphics";
    }

    void displayCourses() const {
        cout << "The courses in btech are:"<<endl;
        for (int i = 0; i < numCourses; i++) {
            cout << courses[i] << endl;
        }
    }

    void addCourse(const string& newCourse) {
        if (numCourses < MAX_COURSES) {
            courses[numCourses++] = newCourse;
            cout << "Course added successfully\n";
        } else {
            cout << "Maximum number of courses reached." << endl;
        }
    }

    void showMenu() {
        int choice;
        string newCourse; 
        while (true) {
            cout << "Menu:"<<endl;
            cout << "1. View Courses"<<endl;
            cout << "2. Add a New Course"<<endl;
            cout << "3. Exit"<<endl;
            cout << "Enter your choice: ";

            if (!(cin >> choice) || choice < 1 || choice > 3) {
                cout << "Invalid input. Please enter a valid number."<<endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }

            switch (choice) {
                case 1:
                    displayCourses();
                    break;

                case 2:
                    cout << "\nEnter a new course: ";
                    cin.ignore(); 
                    getline(cin, newCourse);
                    addCourse(newCourse);
                    break;

                case 3:
                    cout << "Exiting the program. Goodbye!"<<endl;
                    return;

                default:
                    cout << "Invalid choice. Please enter a valid option."<<endl;
            }
        }
    }
};

int main() {
    BtechCourses btechCourses;
     btechCourses.showMenu();

    return 0;
}
