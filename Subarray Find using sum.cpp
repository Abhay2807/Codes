/* Given an unsorted array A of size N of non-negative integers, find a continuous
subarray which adds to a given number S.*/
#include<iostream>
using namespace std;
#include<climits>
int main()
{
int n,sum;
cin>>n>>sum;
int a[n];

for(int i=0;i<n;i++)
{cin>>a[i];
}
int st = -1, en = -1, currsum = 0, i=0, j=0;
/*while(currsum+a[j]<=sum && j<n)
{currsum+=a[j];
j++;
}
if(currsum==sum)
{cout<<i+1<<" "<<j<<endl;
return 0;
}*/
while(j<n)
{
currsum+=a[j];
while(currsum>sum)	
{
	currsum-=a[i];
	i++;
}
	if(currsum==sum)
	{
	st=i+1;
	en=j+1;
	break;	
	}

	j++;	
}
cout<<st<<" "<<en<<endl;
return 0;
}



