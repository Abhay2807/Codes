/* Program to Reverse the No. entered by the User*/
#include<iostream>
using namespace std;
int main()
{ int num;
cout<<"Enter the number: ";
cin>>num;
int reverse=0;
int lastdigit;
while(num>0)
{ int lastdigit= num%10;
reverse=reverse*10+lastdigit;
num=num/10;
}
cout<<"Reverse of the given number  is "<<reverse<<endl;
return 0;
}
