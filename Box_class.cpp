#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    // Default Constructor
    Box() {
        length = 1;
        width = 1;
        height = 1;
    }

    // Parameterized Constructor
    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
    }

    // Copy Constructor
    Box(const Box &b) {
        length = b.length;
        width = b.width;
        height = b.height;
    }

    // Calculate Volume
    double calculateVolume() {
        return length * width * height;
    }

    // Display Object Information
    void display() {
        cout << "Length : " << length << endl;
        cout << "Width : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << calculateVolume() << endl;
    }

    // Destructor
    ~Box() {
        cout << "Box object destroyed." << endl;
    }
};

int main() {

    // Default Constructor
    Box b1;

    cout << "----- Default Constructor -----" << endl;
    b1.display();

    // Parameterized Constructor
    Box b2(10, 5, 4);

    cout << "\n----- Parameterized Constructor -----" << endl;
    b2.display();

    // Copy Constructor
    Box b3(b2);

    cout << "\n----- Copy Constructor -----" << endl;
    b3.display();

    return 0;
}