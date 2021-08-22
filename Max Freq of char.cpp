/*Program to find the maximum frequency of the occurence of a character in the string
 and also display that character */ 
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{string s="abhaysfsasgsgs";
int size[26];
for(int i=0;i<26;i++)
{size[i]=0;
}

for(int i=0;i<s.size();i++)
{
  size[s[i]-'a']++;	
	
}


char ans='a';
int mfr=0;
for(int j=0;j<26;j++)
{if(size[j]>mfr)
{mfr=size[j];
ans=j+'a';
}
}
cout<<mfr<<" "<<ans<<endl;
return 0;
}
