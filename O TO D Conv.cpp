//Program to implement Octal to Decimal Conversion...
#include<iostream>
#include<cmath>
using namespace std;

int octtodec(int a)
{ int i=1,ldig,res=0;
 while(a>0)
{
ldig=a%10;
res=res+i*ldig;
i*=8;
a=a/10;
} return res;
}

int main()
{ int num;
cin>>num;
cout<<octtodec(num);
return 0;
}
