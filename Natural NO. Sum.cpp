/* To get the sum of the first n number using recursion.*/

#include<iostream>
using namespace std;

int sumofnatural(int num)
{  if(num==0)
{return 0;
}
int sum= sumofnatural(num-1)	;
return num+sum;
	
	
}



int main()
{
int n;
cin>>n;
cout<<sumofnatural(n)<<endl;
return 0;
}


