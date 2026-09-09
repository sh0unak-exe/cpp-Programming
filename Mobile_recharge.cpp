#include <iostream>
#include <string>
using namespace std;

class MobileRecharge {
private:
    string mobileNumber;
    double balance;

public:
    MobileRecharge(string number, double initialBalance) {
        mobileNumber = number;
        balance = initialBalance;
    }

    void recharge(double amount) {
        balance += amount;
        cout << "Recharge successful: ₹" << amount << endl;
    }

    void deductBalance(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount deducted: ₹" << amount << endl;
        }
        else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() {
        cout << "\n----- Mobile Account Details -----" << endl;
        cout << "Mobile Number : " << mobileNumber << endl;
        cout << "Balance : ₹" << balance << endl;
    }
};

int main() {
    MobileRecharge mobile("9876543210", 100);

    mobile.display();

    mobile.recharge(200);
    mobile.deductBalance(50);

    mobile.display();

    return 0;
}