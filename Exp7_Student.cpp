#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;
    string className;

public:
    void getStudent()
    {
        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Class: ";
        cin >> className;
    }
};

class Studentmarks : public Student
{
protected:
    float marks[5];

public:
    void getMarks()
    {
        cout << "Enter marks of 5 subjects:\n";

        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }
};

class Studentpercentage : public Studentmarks
{
private:
    float total, percentage;

public:
    void calculate()
    {
        total = 0;

        for (int i = 0; i < 5; i++)
        {
            total = total + marks[i];
        }

        percentage = total / 5;
    }

    void display()
    {
        cout << endl << "----- Student Result -----" << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main()
{
    Studentpercentage s;

    s.getStudent();
    s.getMarks();
    s.calculate();
    s.display();

    return 0;
}