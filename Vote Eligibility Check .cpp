//Program to check Vote Eligibility Criteria In India
#include<iostream>
#include<cmath>
using namespace std;

bool vote(int a)
{if(a>=18)
{return true;}
else{return false; }
}

int main()
{ int age;
cout<<"Please enter your age: ";
cin>>age;
if(vote(age))
{cout<<"You are eligible to vote"<<endl;}
else{
cout<<"Not eligible to vote"<<endl; }
return 0;
}
