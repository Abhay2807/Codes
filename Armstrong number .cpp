//Program To check whether the
// No. entered by the user is an Armstrong No. or not
//Armstrong number 153,370,371,407......

#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int num;
cout<<"Enter the number: ";
cin>>num;
int const d=num;
int sum=0;
while(num>0)
{ int ldig=num%10;
sum=(sum+(pow(ldig,3)));
num=num/10;
}
cout<<sum<<endl;
if(sum==d)
{cout<<"Armstrong number"<<endl;}
else
{cout<<"Non armstrong number"<<endl;}
return 0;}
