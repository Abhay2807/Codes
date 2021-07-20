//Program to Print Butterfly Pattern for given value of n
// BUTTERFLY PATTERN  n=4
/* *      *
   **    **
   ***  ***
   ********
   ********
   ***  ***
   **    **
   *      *   */
   #include<iostream>
   using namespace std;
   int main()
   {
   int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   int i,j,k;
   for(i=1;i<=n;i++)
   { for(j=1;j<=i;j++)
   {
   cout<<"*";
   }
   int gap= 2*n-2*i;
   for(k=1;k<=gap;k++)
   {
   cout<<" ";}
   for(j=1;j<=i;j++)
   {
   cout<<"*";
   }
   cout<<endl;
   }
   for(i=n;i>=1;i--)
   { for(j=1;j<=i;j++)
   {
   cout<<"*";
   }
   int gap=2*n-2*i;
   for(k=1;k<=gap;k++)
   {
   cout<<" ";}
   for(j=1;j<=i;j++)
   {
   cout<<"*";
   }
   cout<<endl;
   }

return 0;
   }
