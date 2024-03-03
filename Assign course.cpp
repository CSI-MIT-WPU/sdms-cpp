#include <iostream>
#include <string>
using namespace std;

class CourseAssigned {
private:
    static const int numCourses = 9;
    string courses[numCourses];

public:
    CourseAssigned() {
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

    void assignCourse(int id) const {
        if (id >= 1 && id <= numCourses) {
            cout << "The course assigned to you is\n" << courses[id - 1] << std::endl;
        } else {
            cout << "Invalid id. Please enter a valid id between 1-9\n";
        }
    }
};

int main() {
    CourseAssigned assigned;

    int choice;
    cout << "Enter your id(1-9): ";
    cin >> choice;

    assigned.assignCourse(choice);

    return 0;
}

