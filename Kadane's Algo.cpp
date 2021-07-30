//Program to Implement Kadane's Algorithm
/*
Idea: Start taking the sum of the array, as soon as it gets negative, discard
the current subarray, and start a new sum.*/
#include<iostream>
#include<climits>
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

int cursum=0;
int maxsum=INT_MIN;
for(i=0;i<n;i++)
{
cursum+=arr[i];
if(cursum<0)
{cursum=0;
}	
maxsum=max(cursum,maxsum);
}
cout<<maxsum;
return 0;
}
