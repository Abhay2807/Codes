//Program to Understand Difference between Pass by Value & Pass by Reference
#include<iostream>
#include<climits>
using namespace std;

void incr(int a) //Pass by Value
{a++;
cout<<a<<" "; //a=9
return;		
}

void incrb(int  *x) //Pass By Reference
{ cout<<*x;//10
	(*x)++;//11
	cout<<" "<<*x<<" ";//11
	return;
}

int main()
{int a;
a=8;
incr(a);
cout<<a;//a=8 remains 
cout<<endl;

int b=10;
incrb(&b);
cout<<" "<<b;//11, b also gets incremented


return 0;
}


