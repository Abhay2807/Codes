/*Program to convert the given string into Uppercase and Lowercase string*/
#include<string>
#include<iostream>
using namespace std;
int main()
{ string s="abhay";
string s1="ABHAYIS";

// Lower to Upper case
for(int i=0;i<s.length();i++)
{
if(s[i]>='a'&& s[i]<='z')
{s[i]=s[i]-32;
	}		
}
cout<<s<<endl;

//Upper to lower case
for(int j=0;j<s1.length();j++)
{
if(s1[j]>='A'&& s1[j]<='Z')
{s1[j]=s1[j]+32;
	 } 		
}
cout<<s1;
return 0;
}
