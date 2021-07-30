/* Program to Find the Longest Arithmetic Subaaray Present 
in the Array input by the User */
/* An arithmetic array is an array that contains at least two integers and the
differences between consecutive integers are equal*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{ int n;
cout<<"Enter the size of array arr : ";
cin>>n;
int arr[n];
cout<<"Enter elements of array arr: "<<" ";
for(int i=0;i<n;i++)
{
cin>> arr[i];
}
int ans=2;
int pd=arr[1]-arr[0];
int j=2;
int curr=2;
while(j<n)
{ if(pd==arr[j]-arr[j-1])
{curr++;
}
else
{ pd=arr[j]-arr[j-1];
curr=2;
} ans=max(ans,curr);
j++;
}
cout<<ans<<" ";
return 0;
}




