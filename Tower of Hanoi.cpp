//Program to Implement Tower of Hanoi 
/* Tower of Hanoi is a mathematical puzzle where we have three rods and n disks.
The objective of the puzzle is to move the entire stack to another rod, obeying the
following simple rules:
1) Only one disk can be moved at a time.
2) Each move consists of taking the upper disk from one of the stacks and placing
it on top of another stack i.e. a disk can only be moved if it is the uppermost disk
on a stack.
3) No disk may be placed on top of a smaller disk.*/

#include<iostream>
using namespace std;

void towerofhanoi(int n,char sour,char dest,char help)
{ 
 if(n==0)
{ 
return;
}
towerofhanoi(n-1,sour,help,dest);
cout<<" Move from "<<sour<<" to "<<dest<<endl;
towerofhanoi(n-1,help,dest,sour);		
}


int main()
{ int discs;
cin>>discs;
cout<<discs<<endl<<endl;
towerofhanoi(discs,'A','B','C');
cout<<endl<<endl<<endl;
cout<<"Total steps taken are :  "<<(1<<discs) -1;
return 0;
}
