/* Program to Print first n terms(entered by the user) of
Fibonacci series */
//Fibonaci series : 0 1 1 2 3 5 8 13 21 ...
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int num;
cout<<"Enter the number of terms : ";
cin>>num;
if(num==1)
{
    cout<<"0"<<" ";
}
else if(num==2)
{
    cout<<"0 1"<<" ";
}
else if(num>=3){ int c;
int a=0,b=1;
int i;
cout<<a<<" "<<b<<" ";
for(i=3;i<=num;i++)
{ c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
}
}
else{cout<<"Invalid input"<<endl;
cout<<"Enter an input>0"<<endl;}
return 0;}


