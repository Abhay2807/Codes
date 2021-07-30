/*Program to Find the Maximum Subarray Sum in the given
Circular Array Input by the User */
#include<iostream>
#include<climits>
using namespace std;

int kadane(int arr[],int n)
{int cursum=0;
int maxsum=INT_MIN;
for(int i=0;i<n;i++)
{
cursum+=arr[i];
if(cursum<0)
{cursum=0;
}	
maxsum=max(cursum,maxsum);
}
return maxsum;
}

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

int wrapsum=0;
int nonwrapsum=0;
nonwrapsum=(kadane(arr,n));
int totalsum=0;
for(i=0;i<n;i++)
{
	totalsum+=arr[i];
	arr[i]=-arr[i];
	}
wrapsum=totalsum+kadane(arr,n);
cout<<max(wrapsum,nonwrapsum);
return 0;
}

	

