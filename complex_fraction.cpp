#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    void add(Fraction f1, Fraction f2)
    {
        numerator = f1.numerator * f2.denominator +
                    f2.numerator * f1.denominator;

        denominator = f1.denominator * f2.denominator;
    }

    void subtract(Fraction f1, Fraction f2)
    {
        numerator = f1.numerator * f2.denominator -
                    f2.numerator * f1.denominator;

        denominator = f1.denominator * f2.denominator;
    }

    void simplify()
    {
        int a = numerator;
        int b = denominator;

        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }

        numerator = numerator / a;
        denominator = denominator / a;
    }

    void display()
    {
        simplify();
        cout << numerator << "/" << denominator << endl;
    }
};

int main()
{
    Fraction f1, f2, sum, difference;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "\nEnter second fraction:\n";
    f2.accept();

    sum.add(f1, f2);
    difference.subtract(f1, f2);

    cout << "\nAddition = ";
    sum.display();

    cout << "Subtraction = ";
    difference.display();

    return 0;
}
