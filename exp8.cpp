#include <iostream>
using namespace std;

class Number
{
    int x;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> x;
    }

    void operator++()
    {
        ++x;
    }

    void display()
    {
        cout << "After increment: " << x << endl;
    }
};

int main()
{
    Number n;

    n.getData();

    ++n;       

    n.display();

    return 0;
}