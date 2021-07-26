/*To Check whether the Number entered by the user
is a Palindrome using Array */
#include<iostream>
using namespace std;
int main()
{int n,i;
cin>>n;
char arr[n+1];
for(i=0;i<n;i++)
{cin>>arr[i];
}
bool ans=true;
for(i=0;i<n;i++)
{ if(arr[i]!=arr[n-i-1])
{ans=false;
break;
}
}
if(ans)	
{cout<<arr<<" is a palindrome";
}
else{cout<<arr<<" not a palindrome";
}
return 0;
}
