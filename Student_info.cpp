#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNumber;
    float marks;

public:
    void accept()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNumber;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Information ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}