#include<iostream>
using namespace std;
int main()
{
int real1, imag1;
int real2, imag2;
int realsum, imagsum;
cout << "Enter real and imaginary part of first number; ";
cin >> real1 >> imag1;
cout << "Enter real and imaginary part of second number; ";
cin >> real2 >> imag2;
realsum = real1 + real2;
imagsum = imag1 + imag2;
cout << "sum of complex number = ";
cout << realsum << " + " << imagsum << "i";
return 0;
}



