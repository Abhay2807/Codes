/*Program to Find the sum of each Subarray present in the Array 
Input by the User */
#include<iostream>
#include<cmath>
using namespace std;

int main()
{ int n;
cout<<"Enter the size of array arr : ";
cin>>n;
int arr[n];
cout<<"Enter elements of array arr: ";
for(int i=0;i<n;i++)
{
cin>> arr[i];
}
int sum=0;
for(int i=0;i<n;i++)
{ sum=0;
    for(int j=i;j<n;j++)
{ sum+=arr[j];
cout<<sum<<" ";
} }
return 0;
}
