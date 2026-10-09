#include <iostream>
using namespace std;

class Employee {
public:
    virtual void calculateSalary() = 0;
};

class Manager : public Employee {
public:
    void calculateSalary() override {
        cout << "Manager Salary = 80000" << endl;
    }
};

class Developer : public Employee {
public:
    void calculateSalary() override {
        cout << "Developer Salary = 50000" << endl;
    }
};

int main() {
    Manager M;
    Developer D;

    M.calculateSalary();
    D.calculateSalary();

    return 0;
}
