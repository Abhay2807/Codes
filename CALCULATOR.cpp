//Program To Perform Simple Mathematical Operations
#include<iostream>
#include<cmath>
using namespace std;
int main()
{ int option;
int num1,num2;
cout<<"Enter two numbers"<<endl;
cin>>num1>>num2;
cout<<"Enter 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division :"<<endl;
cout<<"Enter 12 for square root of num1 and enter 22 for square root of num2: "<<endl;
cin>>option;
switch(option){
case 1:
cout<<"Sum is "<<num1+num2<<endl;
break;
case 2:
cout<<"Difference is "<<num1-num2<<endl;
break;
case 3:
cout<<"Multiplication is "<<num1*num2<<endl;
break;
case 4:
cout<<"Division of "<< num1 <<" and "<<num2<<"is "<<num1/num2<<endl;
break;
case 12:
cout<<"Square root of "<<num1<<" is "<<sqrt(num1)<<endl;
break;
case 22:
cout<<"Square root of "<<num2<<" is "<<sqrt(num2)<<endl;
break;
default:
cout<<"Study bio!!!!"<<endl;
break;}

return 0;
}




