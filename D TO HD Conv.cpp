//Program to Implement DECIMAL TO HEXADECIMAL Conversion...
#include<iostream>
#include<cmath>
using namespace std;

string dtohd(int n)
{ int x=1;
string ans="";
while(x<=n){
x=x*16;}
x/=16;
while(x>0)
{ int ldig=n/x;
n-=ldig*x;
x/=16;
if(ldig<=9)
{ans=ans+to_string(ldig);}
else{
char d='A'+ldig-10;
ans.push_back(d);}}
return ans;
}
int main()
{
int num;
cin>>num;
cout<<dtohd(num)<<endl;
}
