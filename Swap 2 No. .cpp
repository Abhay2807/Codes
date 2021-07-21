//Program to swap values using Function
#include<iostream>
#include<cmath>
using namespace std;

int swap1(int p,int q)
{ int d=q;
return d;
}
int swap2(int p,int q)
{ int d=p;
return d;
}

void swap(int x,int y)
{ int z;
z=x;
x=y;
y=z;
cout<<"After swapping values of a & b are respectively "<<endl;
cout<<x <<" & "<<y<<endl;
return;
}

int main()
{ int a,b;
cin>>a>>b;
cout<<"Earlier a is :"<<a<<endl;
cout<<"Earlier b is :"<<b<<endl;
cout<<"Now a is :"<<swap1(a,b)<<endl;
cout<<"Now b is :"<<swap2(a,b)<<endl;
swap(a,b);
return 0;
}
