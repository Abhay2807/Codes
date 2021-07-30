/* Program to Find whether,there exist 2 numbers in the 
given Array Input by the user, whose sum to is equal to K input by User.
*/
#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int arr[],int n,int key)
{
int low=0;
int high=n-1;
while(low<high)
{ if(arr[low]+arr[high]==key)
{cout<<low<<"  "<<high<<endl;
return true;
}
else if(arr[low]+arr[high]>key)
{high--;
}
else
{low++;
}	
}	
return false;	
}

void bubblesort(int arr[],int n)
{ int flag=0;
 for(int i=0;i<n;i++)
{ for(int j=0;j<n-i-1;j++)
    {if(arr[j]>arr[j+1])
    {
        int temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        flag=1; //Swapping occurs
    }
}
if(flag==0) //List is now sorted
{
    break;
}
}
 for(int i=0;i<n;i++)
{ cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
}
}

int main()
{ int n,i,j;
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{cin>>arr[i];
}
for(i=0;i<n;i++)
{cout<<arr[i]<<" ";
}
cout<<endl;
bubblesort(arr,n);
int key;
cin>>key;
bool d=pairsum(arr,n,key);
if(d)
{cout<<"Sum is found";
}
else
{cout<<"Sum is not found"<<endl;
}
return 0;
}

