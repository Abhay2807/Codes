//Program to do Dynamic Memory Allocation(DMA) For an 2D(Two Dimensional)-Array
#include <iostream>
using namespace std;
 
 
int main()
{ int row,col,i,j;
cin>>row>>col;
int *ptr=new int[row*col];
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
{cout<<"arr"<<"["<<i<<"]"<<"["<<j<<"]"<<"=";
cin>>*(ptr+i*col+j);
}
}
for(i=0;i<row;i++)
{for(j=0;j<col;j++)
{cout<<*(ptr+i*col+j)<<" ";
} cout<<endl;
}
	
delete[] ptr;
ptr=NULL;
return 0;	
	
}
