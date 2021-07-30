/*Given an array arr [] of size N . The task is to find the first repeating element in an
array of integers, i.e., an element that occurs more than once and whose index of
first occurrence is smallest.*/
#include<bits/stdc++.h>
#include<climits>
using namespace std;

int main()
{ int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
 cin>>a[i];
}

const int N=10000;
int idx[N];
for(int i=0;i<N;i++)
{
 idx[i]=-1;
}
int mini=INT_MAX;
for(int i=0;i<n;i++)
{
if(idx[a[i]]!=-1){
mini=min(mini,idx[a[i]]);
}
else
{ idx[a[i]]=i;
}

}

if (mini==INT_MAX)
{ cout<<"-1"<<endl;
}
else
{cout<<mini+1;
}
return 0;
}
