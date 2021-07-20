//Program to Print Palindromic pattern for given value of n
/* n=3
    1
  2 1 2
3 2 1 2 3 */
#include<iostream>
   using namespace std;
   int main()
   {
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   int i,j,k;
   for(i=1;i<=n;i++)
   { for(j=1;j<=n-i;j++){
   cout<<"  "; }
   int k=i;
   for(;j<=n;j++)
{
    cout<<k--<<" ";
}
k=2;
for(;j<=n+i-1;j++)
{
    cout<<k++<<" ";}
   cout<<endl;
   }
   return 0;
   }

