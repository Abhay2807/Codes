/*  In our childhood, we used to call it HCF
 (Highest Common Factor). GCD of two
numbers is the largest number that divides both of the no. */

// EUCLID Algorithm  to find GCD/HCF.......

#include<iostream>
 #include<algorithm>
 #include<climits>
 #include<string>
 #include<cmath>
using namespace std;

int gcdivisor(int a,int b)
{while(b!=0)
{ int r=a%b;
a=b;
b=r;
	
} return a;
}
int main()
{int a,b;
cin>>a>>b;
cout<<gcdivisor(a,b)<<endl;
}
