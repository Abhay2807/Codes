//Program to Implement Binary Search 
#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int key)
{ int start=0;
int end=n-1;
while(start<=end)
{ int mid=(start+end)/2;
if(arr[mid]==key)
{
  return mid;
}
else if(arr[mid]>key)
{ end=mid-1;
}
else
{start=mid+1;}
}
return -1;

}

int main()
{ int n;
cout<<"Enter size of array:";
cin>>n;
int arr[n];
cout<<"Enter all elements of array in ascending order!!!"<<"  "<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];
}

int key;
cout<<"Enter the key :";
cin>>key;
int res=binarysearch(arr,n,key);
if(res==-1)
{
    cout<<"Key "<<key<<" not found"<<endl;
}
else{cout<<"Key "<<key<<" present at index "<<res<<endl;}

return 0;
}

