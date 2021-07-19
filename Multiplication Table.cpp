/* Program to display multiplication table upto 10 
for No. Given by the User*/ 
#include<iostream>
using namespace std;
int main() {
int num;
cin>>num;
int i=1;
while(i<11)
{ cout<<num<<" * "<<i<<" = "<<i*num<<endl;
i++;
}
return 0;
}
