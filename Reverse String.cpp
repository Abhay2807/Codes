//Program To print the string in reverse order using Recursion.

#include<iostream>
using namespace std;

void reverse_string(string s)
{ if(s.length()==0)
{return;
}
string res=s.substr(1);
reverse_string(res);
cout<<s[0];	
	
}


int main()
{ string str;
cin>>str;
cout<<str<<endl;
reverse_string(str);
	
	
	
}
