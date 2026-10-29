#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void accept()
    {
        cout << "Enter hours: ";
        cin >> hours;

        cout << "Enter minutes: ";
        cin >> minutes;

        cout << "Enter seconds: ";
        cin >> seconds;
    }

    Time add(Time t)
    {
        Time result;

        result.seconds = seconds + t.seconds;
        result.minutes = minutes + t.minutes;
        result.hours = hours + t.hours;

        if (result.seconds >= 60)
        {
            result.seconds = result.seconds - 60;
            result.minutes++;
        }

        if (result.minutes >= 60)
        {
            result.minutes = result.minutes - 60;
            result.hours++;
        }

        return result;
    }

    void display()
    {
        cout << hours << ":" << minutes << ":" << seconds;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter First Time:" << endl;
    t1.accept();

    cout <<endl<< "Enter Second Time:" << endl;
    t2.accept();

    result = t1.add(t2);

    cout <<endl<< "Resultant Time: ";
    result.display();

    return 0;
}