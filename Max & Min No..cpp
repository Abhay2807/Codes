/* Program to find the Maximum and the Minimum No. in an Array*/
#include<iostream>
#include<climits>
#include<cmath>
using namespace std;


  int main()
  { int n,i;
  cout<<"Enter the size of array: ";
  cin>>n;
  int array1[n];
  for(i=0;i<n;i++)
  { cin>>array1[i];
  }
 int maxno=INT_MIN;
 int minno=INT_MAX;

  for(i=0;i<n;i++)
  { maxno=max(maxno,array1[i]);
  minno=min(minno,array1[i]);
  }

  cout<<"Maximum No. is "<<maxno<<" and "<<" Minimum is "<<minno;
  return 0;

}
