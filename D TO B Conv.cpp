//Program to Implement Decimal to Binary Conversion...
#include<iostream>
#include<cmath>
using namespace std;

int dectobin(int n)
{ int x=1;
int ans=0;
while(x<=n)
{
    x=x*2;
}
x=x/2;
while(x>0)
{
   int lastdig=n/x;
   n=n-lastdig*x;
   x=x/2;
   ans=ans*10+lastdig;
}
return ans;
}

int main()
{ int num;
cin>>num;
cout<<dectobin(num)<<endl;
return 0;
}
