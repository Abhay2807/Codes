//Program to Print all Prime No.Tillthe input n given by user
#include<iostream>
using namespace std;


bool checkprime(int num)
{ int j;
for(j=2;j*j<=num;j++)
{if(num%j==0)
{return false;}
}
return true;
}


void getprime(int n)
{ int i;
for(i=2;i<=n;i++)
{if(checkprime(i))
{cout<<i<<" ";
}
}
return;
}


int main()
{int n;
cin>>n;
getprime(n);
return 0;
}
