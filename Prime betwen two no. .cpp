//Program to print all prime numbers in a given range
#include<iostream>
using namespace std;
int main(){
int a;
int b;
cin>>a>>b;
int i;
for(int num=a+1;num<b;num++){
for(i=2;i<num;i++){
        if(num%i==0){
            break;}
} if(i==num){
cout<<num<<endl;}
}
return 0;
}
// In output we get all prime numbers between numbers a and b excluding both of them...
