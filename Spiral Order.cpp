// SPIPRAL ORDER MATRIX TRAVERSAL 
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
int rst=0,cst=0,cend=m-1,rend=n-1;
int i,j;
while(rst<=rend && cst<=cend){
//row start Move
for(j=cst;j<=cend;j++)
{cout<<a[rst][j]<<" ";
}
rst++;
//column end move
if(rst<=rend && cst<=cend){
for(i=rst;i<=rend;i++)
{cout<<a[i][cend]<<" ";
}
cend--;}
//Row end Move
if(rst<=rend && cst<=cend){
for(j=cend;j>=cst;j--)
{cout<<a[rend][j]<<" ";
}
rend--;}
//Column start move
if(rst<=rend && cst<=cend){
for(i=rend;i>=rst;i--)
{cout<<a[i][cst]<<" ";
}
cst++;}
}
return 0;
}























