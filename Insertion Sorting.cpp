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
return 0;

}

