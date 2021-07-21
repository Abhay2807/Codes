//Program to Implement Hexadecimal to Decimal Conversion...
#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int hexdtod(string a)
{  int b,ans=0;
int i=1;
int s=a.size(); //(s-1) gives index of last string element
//a.size() gives no. of totall elements in string
for( b=s-1;b>=0;b--)
{ if(a[b]>='0' && a[b]<='9')
{
ans+=i*(a[b]-'0');
}
else if(a[b]>='A' && a[b]<='F')
{
ans+=i*(a[b]-'A'+10);
}
i*=16;
}return ans;
}

int main()
{ string num;
cin>>num;
cout<<hexdtod(num);
}
