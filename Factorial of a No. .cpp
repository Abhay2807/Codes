//To get the factorial of the number input by the user, using Recursion

#include<iostream>
using namespace std;

int factorial(int n)
{if(n==0)
{return 1;
}
int fact=factorial(n-1);
return n*fact;
}


int main()
{ int num;
cin>>num;
cout<<factorial(num)<<endl;
return 0;	
}
