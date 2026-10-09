#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNo;

    void getStudent() {
        cout << "Enter the name: ";
        getline(cin, name);

        cout << "Enter the roll number: ";
        cin >> rollNo;
    }
};

class StudentExam : protected Student {
protected:
    int DMS, CPP, OEC, IPR, MDM;

    void getMarks() {
        cout << "\nEnter marks for 5 subjects:\n";

        cout << "Enter DMS marks: ";
        cin >> DMS;

        cout << "Enter C++ marks: ";
        cin >> CPP;

        cout << "Enter OEC marks: ";
        cin >> OEC;

        cout << "Enter IPR marks: ";
        cin >> IPR;

        cout << "Enter MDM marks: ";
        cin >> MDM;
    }
};

class StudentResult : protected StudentExam {
protected:
    int total;
    float percentage;

    void calculateResult() {
        total = DMS + CPP + OEC + IPR + MDM;
        percentage = (total / 500.0) * 100;
    }

public:
    void displayResult() {
        getStudent();
        getMarks();
        calculateResult();

        cout << "\n----- Student Result -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;

        cout << "\nMarks:" << endl;
        cout << "DMS : " << DMS << endl;
        cout << "C++ : " << CPP << endl;
        cout << "OEC : " << OEC << endl;
        cout << "IPR : " << IPR << endl;
        cout << "MDM : " << MDM << endl;

        cout << "\nTotal Marks: " << total << " / 500" << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    StudentResult s;

    s.displayResult();

    return 0;
}

