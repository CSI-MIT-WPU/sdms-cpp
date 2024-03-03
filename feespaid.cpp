#include <iostream>
#include <string>
using namespace std;

class FeePayment {
private:
    int amountPaid;
    int courseYear;

public:
    FeePayment(int paid, int year) : amountPaid(paid), courseYear(year) {}

    void checkPaymentStatus() const {
        if (courseYear == 1 && amountPaid >= 350000 ) {
            cout << "Fees for 1st year have been paid." << endl;
        } else if (courseYear == 2 && amountPaid >= 700000 ) {
            cout << "Fees for 2nd year have been paid." << endl;
        } else if (courseYear == 3 && amountPaid >= 1050000) {
            cout << "Fees for 3rd year have been paid." << endl;
        } else if (courseYear == 4 && amountPaid >= 1400000) {
            cout << "Fees for 4th year have been paid." << endl;
        } else {
            cout << "Fees for year " << courseYear << " have not been paid." << endl;
        }
    }
};

int main() {
    int amount, year;

    do {
        cout << "Enter the year you are in : ";
        cin >> year;

        if (year < 1 || year > 4) {
            cout << "Invalid input. Please enter a valid year between 1 and 4." << endl;
        }
    } while (year < 1 || year > 4);

    do{
        cout << "Enter the amount paid: ";
    cin >> amount;
if(amount>1500000){
    cout<<"Invalid amount entered"<<endl;
}
} while (amount>1500000);

    FeePayment studentPayment(amount, year);
    studentPayment.checkPaymentStatus();

    return 0;
}
