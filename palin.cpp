#include <iostream>
using namespace std;
int main()
{
int n, rev=0;
cout << "Enter number: ";
cin >> n;
while(n !=0) 
{
rev = rev* 10 + n % 10;
n/=10;
}
if(n==rev)
cout<<"Palindrome Number";
else
cout<<"Not a Palindrome Number";
return 0;
}

