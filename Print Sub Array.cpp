/* Program to Print all the subarrays present, in the given 
Array Input By the User */
#include<iostream>
using namespace std;
int main()
{ int n,i,j;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{cin>>arr[i];
}
for(i=0;i<n;i++)
{cout<<arr[i]<<" ";
}
cout<<endl;
for(i=0;i<n;i++)
{for(j=i;j<n;j++)
{for(int k=i;k<=j;k++)
{
cout<<arr[k]<<" ";
}cout<<endl;
}
}
return 0;
}
	
	
	
	
	

