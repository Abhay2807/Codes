//Program to find sum of all elements in an Array
#include<iostream>
  using namespace std;


  int main()
  { int n,i;
  cout<<"Enter the size of array: ";
  cin>>n;
  int array1[n];
  cout<<"Enter all "<<n<<" elements of array1 "<<" ";
  for(i=0;i<n;i++)
  { cin>>array1[i];
  }
  int sum=0;
  for(i=0;i<n;i++)
  {
  sum=sum+array1[i];
  }
  cout<<"Sum of all elements is "<<sum;
  return 0;
  }
