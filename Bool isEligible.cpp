#include <iostream>
using namespace std;

class student {
private: 
    float Internalscore;
public: 
    student(float score) : Internalscore(score) {}
    bool isEligibleforEndSem() {
        return (Internalscore >= 60.0f);
    }
};

int main() {
    float Internalscore;
    cout << "Enter student's internal exam score:";
    cin >> Internalscore;
    student s1(Internalscore);
    if (s1.isEligibleforEndSem()) {
        cout << "Student is eligible for endsem" << "\n";
    } else {
        cout << "Student is not eligible for endsem" << "\n";
    }
    return 0;
}
