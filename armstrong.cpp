#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int a, temp, rem, digits = 0;
double sum = 0;
cout << "Enter number: ";
cin >> a;
temp= a;
while( temp != 0) 
{
digits++;
temp/= 10;
}
temp = a;
while( temp != 0) 
{
rem = temp % 10;
sum += pow(rem, digits);
temp /=10;
}
if(sum == a)
cout << "Armstrong Number";
else
cout << "Not Armstrong Number";
return 0;
}

