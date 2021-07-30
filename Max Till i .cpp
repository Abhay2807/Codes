/* Given an array a[] of size n. For every i from 0 to n-1
 output max(a[0], a[1],..., a[i]).*/ 
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
cin>>arr[i];
}
int mx=-199999;
for(int i=0;i<n;i++)
{ mx=max(mx,arr[i]);
cout<<mx<<" "<<endl;
}
return 0;

}







