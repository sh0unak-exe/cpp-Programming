#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeId;
    string employeeName;
    double basicSalary;
    double HRA;
    double DA;

public:
    // Parameterized Constructor
    Employee(int id, string name, double basic,
             double hra, double da) {
        employeeId = id;
        employeeName = name;
        basicSalary = basic;
        HRA = hra;
        DA = da;espace std;

class Employee {
private:
    int employeeId;
    string employeeName;
    double basicSalary;
    double HRA;
    double DA;
    }

    double calculateGrossSalary() {
        return basicSalary + HRA + DA;
    }

    void display() {
        cout << "\n----- Employee Details -----" << endl;
        cout << "Employee ID : " << employeeId << endl;
        cout << "Employee Name : " << employeeName << endl;
        cout << "Basic Salary : ₹" << basicSalary << endl;
        cout << "HRA : ₹" << HRA << endl;
        cout << "DA : ₹" << DA << endl;
        cout << "Gross Salary : ₹"
             << calculateGrossSalary() << endl;
    }

    // Destructor
    ~Employee() {
        cout << "\nEmployee object destroyed." << endl;
    }
};

int main() {
    Employee e(101, "Rahul", 30000, 5000, 3000);

    e.display();

    return 0;
}
