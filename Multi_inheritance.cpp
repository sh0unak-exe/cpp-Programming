#include <iostream>
using namespace std;

// Base Class
class Student
{
    int roll_no;
    char stud_name[25];

public:

    void getdata()
    {
        cout << "\n----------------------------------";
        cout << "\nEnter Roll No. : ";
        cin >> roll_no;

        cout << "Enter Student Name : ";
        cin >> stud_name;
    }

    void putdata()
    {
        cout << "\n----------------------------------";
        cout << "\nRoll No. : " << roll_no;
        cout << "\nStudent Name : " << stud_name;
    }
};


// Intermediate Class
class StudentExam : public Student
{
protected:
    int sub1, sub2, sub3, sub4, sub5;
    int total;

public:

    void accept_data()
    {
        getdata();

        cout << "\nEnter Marks for Subject 1 : ";
        cin >> sub1;

        cout << "Enter Marks for Subject 2 : ";
        cin >> sub2;

        cout << "Enter Marks for Subject 3 : ";
        cin >> sub3;

        cout << "Enter Marks for Subject 4 : ";
        cin >> sub4;

        cout << "Enter Marks for Subject 5 : ";
        cin >> sub5;

        total = sub1 + sub2 + sub3 + sub4 + sub5;
    }

    void display_data()
    {
        putdata();

        cout << "\nMarks of Subject 1 : " << sub1;
        cout << "\nMarks of Subject 2 : " << sub2;
        cout << "\nMarks of Subject 3 : " << sub3;
        cout << "\nMarks of Subject 4 : " << sub4;
        cout << "\nMarks of Subject 5 : " << sub5;

        cout << "\nTotal Marks : " << total << " / 500";
    }
};


// Derived Class
class StudentResult : public StudentExam
{
    float percentage;

public:

    void calculate()
    {
        percentage = total / 5.0;

        cout << "\nPercentage : " << percentage << "%";
        cout << "\n----------------------------------";
    }
};


// Main Function
int main()
{
    StudentResult stud;

    stud.accept_data();

    stud.display_data();

    stud.calculate();

    return 0;
}
