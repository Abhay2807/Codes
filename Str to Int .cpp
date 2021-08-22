//
#include<iostream>
#include<string>
using namespace std;
int main()
{ string str="24";
int x=2;
cout<<to_string(x)+"b"<<endl;//int to str
// gives 2b
int a=stoi(str); //str to int 
cout<<a+2; // gives 26
return 0;
}

