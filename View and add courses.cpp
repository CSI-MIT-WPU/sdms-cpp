#include <iostream>
#include <limits>
using namespace std;

int main() {
    string courses[20] = {"Discrete Mathematics with Graph Theory", "fcasd", 
                          "Programming and Problem Solving", "Chemistry", 
                          "Engineering Mechanics", "Linear Algebra and Differential Calculus",
                          "Physics", "Biology for Engineers", "Engineering Graphics"};
    int numCourses = 9;

    int choice;
    string newCourse;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. View Courses\n";
        cout << "2. Add a New Course\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        cin.ignore();  

        switch (choice) {
            case 1:
                cout << "\nThe courses are" << endl;
                for (int i = 0; i < numCourses; i++) {
                    cout << courses[i]<< endl;
                }
                break;

            case 2:
                if (numCourses < 20) { 
                    cout << "\nEnter a new course: ";
                    getline(cin, newCourse);
                    courses[numCourses] = newCourse;  
                    numCourses++;
                    cout << "Course added successfully\n";
                } else {
                    cout << "Maximum number of courses reached.\n";
                }
                break;

            case 3:
                cout << "Exiting the program. Goodbye!\n";
                return 0;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    }

    return 0;
}