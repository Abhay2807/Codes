/* Program to implement Firstly  Sorting and then Binary search */
#include<iostream>
using namespace std;

void insertsort(int arr[],int n)
{ for(int i=1;i<n;i++)
{ int j=i;
while(j>0 && arr[j-1]>arr[j])
{
 int temp=arr[j];
 arr[j]=arr[j-1];
 arr[j-1]=temp;
 j--;
}
}
for(int i=0;i<n;i++)
{ cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
}
}

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
cout<<"Enter all elements of array:"<<"  "<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];
}
insertsort(arr,n);

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

