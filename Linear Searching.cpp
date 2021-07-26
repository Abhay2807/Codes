//Program to Implement Linear Search
#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{ for(int j=0;j<n;j++)
{if(key==arr[j])
{
        return j;
}   }
return -1;
}

int main()
{ int n;
cout<<"Enter size of array:";
cin>>n;
int arr[n];
cout<<"Enter all elements of array"<<"  "<<endl;
for(int i=0;i<n;i++){
        cin>>arr[i];
}

int key;
cout<<"Enter the key :";
cin>>key;
int res=linearsearch(arr,n,key);
if(res==-1)
{
    cout<<"Key "<<key<<" not found"<<endl;
}
else{cout<<"Key "<<key<<" present at index "<<res<<endl;}

return 0;
}
