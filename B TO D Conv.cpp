//Program to implement Binary to Decimal Conversion
#include<iostream>
#include<cmath>
using namespace std;

int bintodec(int a)
{ int i=1,ldig,res=0;
 while(a>0)
{
ldig=a%10;
res=res+i*ldig;
i=i*2;
a=a/10;
} return res;
}

int main()
{ int num;
cin>>num;
cout<<bintodec(num);
return 0;
}
