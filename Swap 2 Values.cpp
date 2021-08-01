//Program to Swap two values using Pointers.
#include<iostream>
#include<climits>
using namespace std;

void swap(int *a,int *b)
{int temp=*a;
*a=*b;
*b=temp;
 return;		
}

int main()
{int a=8,b=28;
swap(&a,&b);
cout<<a<<" "<<b<<endl;
int c=12,d=54;
int *cp=&c;
int *dp=&d;
swap(cp,dp);
cout<<c<<" "<<d;
return 0;
}
	
	

