/* To find the maximum word length in the sentence 
input by the User using Array*/
#include<iostream>
using namespace std;
int main()
{int n;
cin>>n;
cin.ignore();
char arr[n+1];
cin.getline(arr,n);
cin.ignore();

int i=0,clen=0,mlen=0;
int st=0,maxst=0;

while(i<n)
{
if(arr[i]==' '|| arr[i]=='\0')	
{if(clen>mlen)
{mlen=clen;
maxst=st;}
st=i+1;
clen=0;
}
else{
clen++;
}
if(arr[i]=='\0')
{
break;
}
	i++;	
} 

cout<<mlen<<endl;

for(int i=0;i<mlen;i++)
{cout<<arr[i+maxst];
}
return 0;
}
