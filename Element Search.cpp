/* Program to Check Whether the No. Input by the User is present 
in the given 2D Array Input by the, User or not. */
#include<iostream>
using namespace std;
int main()
{ int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
    cin>>a[i][j];
}
}
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
    cout<<a[i][j]<<" ";
}
cout<<endl;
}
int x;
cout<<"Enter the element you want to search in above array : ";
cin>>x;
bool flag=false;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
    if(a[i][j]==x)
    { cout<<a[i][j]<<" "<<endl;
    cout<<i<<" "<<j<<endl;
flag=true;}
}
}
if(flag)
{cout<<"Element found!!!"<<endl;}
else{
cout<<"Element not Found!!!"<<endl;
}
return 0;
}
