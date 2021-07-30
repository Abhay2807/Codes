//Transpose of MATRIX!!! 
/*Given a square matrix A & its number of rows (or columns) N, return the
transpose of A.
The transpose of a matrix is the matrix flipped over it's main diagonal,
switching the row and column indices of the matrix.*/

#include<iostream>
using namespace std;
int main()
{ 
int n,m;
cin>>n;
m=n;
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
//Transpose of Matrix
for(int i=0;i<n;i++)
{
for(int j=i;j<m;j++)
{ int temp=a[i][j];
a[i][j]=a[j][i];
a[j][i]=temp;	
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
return 0;		
	
}
