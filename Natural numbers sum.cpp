#include<iostream>
using namespace std;
//Natural no. are 1,2,3,4,5,6...............
int main()
{ int num;
cout<<"Enter the number upto which you want to find the sum of natural numbers : ";
cin>>num;
int sum=0;
int counter;
for(counter=1;counter<=num;counter++)
{sum=sum+counter;

}
cout<<"Sum of first "<<num<<" natural numbers is "<<sum<<endl;
return 0;


}
