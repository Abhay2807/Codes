/*Program with two functions to print the maximum and the
minimum number respectively among three numbers entered by user.*/
#include<iostream>
#include<cmath>
using namespace std;

int maxnum(int a,int b,int c)
{ int d=max(a,max(b,c));
return d;
}

int minnum(int x,int y,int z)
{ int e=min(x,min(y,z));
return e;
}

int main()
{ int p,q,r;
cin>>p>>q>>r;
cout<<"Max No. is "<<maxnum(p,q,r)<<endl;
cout<<"Min No.is "<<minnum(p,q,r)<<endl;
return 0;
}
