/*Program to remove Consecutively repeating characters from the string*/
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{string s="abhhaaasdddfffggeggg";
char arr[100];
arr[0]=s[0];
int a=s.size();
int count=1;
for(int i=1;i<a;i++)
{if(s[i]!=s[i-1])
{arr[count]=s[i];
count++;
}
}
cout<<arr;
return 0;
}

