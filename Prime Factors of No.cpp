//Program to find prime factors of given number input by the user
#include<iostream>
using namespace std;

void primefact_no(int n)
{ int spf[n+1]={0};
int i,j;
for(i=2;i<=n;i++)
{ spf[i]=i;
} 
for(i=2;i<=n;i++)
{ if(spf[i]==i)
{for(j=i*i;j<=n;j+=i)
{ if(spf[j]==j)
{spf[j]=i;}
}
}
}
while(n!=1)
{cout<<spf[n]<<" ";
n=n/spf[n];
} 
return;
}



int main()
{int num;
cin>>num;
primefact_no(num);
return 0;
}
