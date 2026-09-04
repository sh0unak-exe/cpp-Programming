#include<iostream>
using namespace std;
class Savingaccount
{
int accountNo;
string name;
float balance;
float interestRate;

public:

Savingaccount(int a,string n,float b,float i)
{
accountNo=a;
name=n;
balance=b;
interestRate=i;
}

void deposite(float amount)
{
balance=balance+amount;
}

void withdraw(float amount)
{
if (amount<=balance)
{
balance=balance-amount;
}
else
{
cout<<"Insufficient Balance"<<endl;
}
}

void calculateRate()
{
float interest=balance*interestRate/100;
balance=balance+interest;
}

void display()
{
cout<<"\n---------Saving Account------------"<<endl;
cout<<"Account:"<<accountNo<<endl;
cout<<"Name:"<<name<<endl;
cout<<"Balance:"<<balance<<endl;
cout<<"Interest Rate:"<<interestRate<<"%"<<endl;
}
};

class Checkingaccount
{
int accountNo;
string name;
float balance;

public:

Checkingaccount(int a, string n,float b)
{
accountNo=a;
name=n;
balance=b;
}

void deposite(float amount)
{
balance=balance+amount;
}

void withdraw(float amount)
{
if (amount<=balance)
{
balance=balance-amount;
}
else
{
cout<<"Insufficient Balance"<<endl;
}
}

void checkBalance()
{
cout<<"Current Balance:"<<balance<<endl;
}

void display()
{
cout<<"\n------------Checking Account--------------"<<endl;
cout<<"Account Number:"<<accountNo<<endl;
cout<<"Account Name:"<<name<<endl;
cout<<"Balance:"<<balance<<endl;
}
};

int main()
{

Savingaccount s(907,"Shounak",100000,5);
Checkingaccount c(201,"Shounak",500000);

s.deposite(20000);
s.withdraw(1000);
s.calculateRate();
s.display();

c.deposite(40000);
c.withdraw(7000);
c.checkBalance();
c.display();

return 0;

}





