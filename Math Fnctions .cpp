/*Program Implementing Use of Different 
Built-in Math Functions in C++ */
#include<iostream>
#include<cmath>
using namespace std;
int main(){
float num;
cout<<"Enter the number on which you want to do the operations: "<<endl;
cin>>num;
cout<<"Square root of "<<num<<" is "<<sqrt(num)<<endl;
cout<<"Square of "<<num<<" is "<<pow(num,2)<<endl;
cout<<"Cube of "<<num<<" is "<<pow(num,3)<<endl;
cout<<"log of "<<num<<" is "<<log(num)<<endl;
cout<<"Sine of "<<num<<" is "<<sin(num)<<endl;
return 0;
}
