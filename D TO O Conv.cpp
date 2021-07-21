//Program to Implement Decimal to octalConversion..
#include<iostream>
#include<cmath>
using namespace std;

int dectooct(int n)
{ int x=1;
int ans=0;
while(x<=n)
{
    x=x*8;
}
x=x/8;
while(x>0)
{
   int lastdig=n/x;
   n=n-lastdig*x;
   x=x/8;
   ans=ans*10+lastdig;
}
return ans;
}

int main()
{ int num;
cout<<"Enter your decimal Input :";
cin>>num;
int result= dectooct(num);
cout<<"Octal result is "<<result<<endl;
return 0;
}
