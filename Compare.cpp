//Program Used to Compare two strings
#include<iostream>
#include<string>
using namespace std;
int main()
{string st1="abc";
string st2="xyz";
cout<<st2.compare(st1)<<endl;
cout<<st2.compare(st2)<<endl;
cout<<st1.compare(st2)<<endl;

st1.clear();
if(st1.empty())
{cout<<"st1 is empty"<<endl;
}
if(!st2.empty())
{cout<<"st2 not empty!!"<<endl;
}
return 0;


}

