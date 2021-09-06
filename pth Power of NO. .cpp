/* To calculate n^p(pth power of n) using Recursion  */ 

#include<iostream>
using namespace std;

int numpower(int a,int b)
{if(b==0)
{return 1;
}
int result=numpower(a,b-1);
return (a*result);
}

int main()
{ int num,pow;
cin>>num>>pow;
cout<<numpower(num,pow)<<endl;
return 0;	
}




