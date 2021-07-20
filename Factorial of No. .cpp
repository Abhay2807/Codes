//Program to find Factorialof a No. entered by the User
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int num;
cout<<"Enter the number: ";
cin>>num;
int fact=1,i;
if(num>=0){
cout<<"Valid input "<<endl;
if(num==0 || num==1){
cout<<"Factorial is "<<fact<<endl;
}
else{ for(i=1;i<=num;i++)
{fact=fact*i ;
}
cout<<"Factorial is "<<fact<<endl;}}
else{ cout<<"Invalid Input";}
return 0;
}
