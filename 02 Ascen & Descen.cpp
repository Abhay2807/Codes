/* Program to sort given string of Numbers in ascending order
and descending order */
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{ string s="218979586978";

//To sort in ascending order(form_smallest_poss_no.)
sort(s.begin(),s.end());
cout<<s<<endl;

string s1="129878945689";
//To sort in descending order(form_greatest possible no.)
sort(s1.begin(),s1.end(),greater<int>());
cout<<s1;
return 0;
}
