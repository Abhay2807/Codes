//Program to Add two binary numbers Input by the User.
#include<iostream>
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
{ int num1,num2;
cout<<"Enter 1st binary no. :"<<endl;
cout<<"Enter 2nd binary no. :"<<endl;
cin>>num1>>num2;
int p=bintodec(num1);
int q=bintodec(num2);
cout<<"Decimal representation of num1 is "<< p<<" and "<< "num2 is "<<q<<endl;
int z=p+q;
int sumofb=dectobin(z);
cout<<"Decimal sum is "<<z <<endl;
cout<<"Sum of 2 binary numbers "<<num1 <<" and "<<num2 <<" is "<<sumofb<<endl;

return 0;
}
