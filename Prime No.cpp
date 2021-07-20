/* Program to check whether the No. entered by the user is a Prime
No. or not */
#include<iostream>
using namespace std;
int main()
{ int num;
cout<<"Enter the number: ";
cin>>num;
int div;
for(div=2;div<num;div++)
{ if(num%div==0)
{cout<<" Non Prime no."<<endl;
break;}
}
if(div==num)
{cout<<"Prime no."<<endl;}
return 0;
}
