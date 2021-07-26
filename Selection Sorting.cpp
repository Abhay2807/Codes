//Program to Implement Selection Sort
#include<iostream>
using namespace std;

void selectsort(int arr[],int n)
{ int temp=0;
for(int i=0;i<n-1;i++)
{ for(int j=i+1;j<n;j++)
{ if(arr[j]<arr[i])
{  temp=arr[j];
arr[j]=arr[i];
arr[i]=temp;
}
}
}
for(int i=0;i<n;i++)
{ cout<<"arr["<<i<<"] = "<<arr[i]<<endl;
}
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
selectsort(arr,n);
return 0;

}

