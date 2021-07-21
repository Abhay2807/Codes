//Program  TO calculate binary coefficient (ncr)
#include<iostream>
using namespace std;

int fact(int b)
{ int result=1;
if(b==1 || b==0)
{ return 1;}
else{
for(int i=1;i<=b;i++)
{ result=result*i;
 }
return result;
}
}

int main()
{ int n,r;
cout<<"Enter value of n and r , respectively: ";
cin>>n>>r;
cout<<"The value of binary coefficient is : "<<endl;
cout<<(fact(n))/(fact(r) * fact(n-r))<<endl;

return 0;
}
