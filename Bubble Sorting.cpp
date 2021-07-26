//Program to Implement Bubble Sort
#include<iostream>
using namespace std;

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
{ int n;
cout<<"Enter size of array:";
cin>>n;
int arr[n];
cout<<"Enter all elements of array :"<<"  "<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];
}
bubblesort(arr,n);
return 0;


}
