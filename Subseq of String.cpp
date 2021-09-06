/* Program  to Print all the subsequences of the 
String input by the user using Recursion */


#include<iostream>
using namespace std;

void subseq(string s,string ab)
{ 
if(s.length()==0)
{cout<<ab<<endl;
return;
}
char a=s[0];
string res=(s.substr(1));
subseq(res,ab);
subseq(res,ab+a);
}

int main()
{ string str;
cin>>str;
cout<<str<<endl<<endl;
subseq(str,"");
return 0;	
}
