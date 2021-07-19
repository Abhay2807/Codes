//To Check Whether the Alphabet entered by user is a Vowel or a Consonant 
#include<iostream>
#include<string>
using namespace std;
int main()
{ char g;
cin>>g;
if(g=='a'||g=='e'||g=='i'||g=='o'||g=='u'||g=='A'||g=='E'||g=='I'||g=='O'||g=='U')
{ cout<<g<<" is an vowel alphabet";
}
else{
cout<<g<<" is a consonant alphabet";
}
return 0;
}
