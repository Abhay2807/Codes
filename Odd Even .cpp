// To Check Whether the No. entered by the user is an Even No. or Odd No. 
#include<iostream>
#include<string>
using namespace std;
int main()
{
int num;
cout<<"Please enter the number: "<<endl;
cin>>num;
if(num%2==0){
cout<<num<<" is an even number";
}
else{
cout<<num<<" is an odd number";
}
return 0;
}
