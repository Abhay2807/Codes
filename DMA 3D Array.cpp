//Program to do Dynamic Memory Allocation(DMA) For an 3D(Three Dimensional)-Array
#include <iostream>
using namespace std;
 
 
int main()
{ int no,row,col,i,j,k;
cin>>no>>row>>col;
int *ptr=new int[no*row*col];

for(i=0;i<no;i++)
{for(j=0;j<row;j++)
{for(k=0;k<col;k++)
{cout<<"arr["<<i<<"]["<<j<<"]["<<k<<"]=";
cin>>*(ptr+i*row*col+j*col+k);
}
}
}
for(i=0;i<no;i++)
{for(j=0;j<row;j++)
{for(k=0;k<col;k++)
{cout<<*(ptr+i*row*col+j*col+k)<<" ";
}cout<<endl;
}cout<<endl;
}
delete[] ptr;
ptr=NULL;
return 0;
}
	

