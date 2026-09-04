#include <iostream>
#include <iomanip>
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

    void add(Time t1, Time t2)
    {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes;
        hours = t1.hours + t2.hours;

        if (seconds >= 60)
        {
            seconds = seconds - 60;
            minutes++;
        }

        if (minutes >= 60)
        {
            minutes = minutes - 60;
            hours++;
        }
    }

    void display()
    {
        cout << setfill('0') << setw(2) << hours << ":"
             << setw(2) << minutes << ":"
             << setw(2) << seconds << endl;
    }
};

int main()
{
    Time t1, t2, result;

    cout << "Enter first time:\n";
    t1.accept();

    cout << "\nEnter second time:\n";
    t2.accept();

    result.add(t1, t2);

    cout << "\nResultant Time = ";
    result.display();

    return 0;
}
