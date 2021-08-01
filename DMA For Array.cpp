//Program to do Dynamic Memory Allocation(DMA) For an Array
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter total number of subjects: ";
    cin >> num;
    int *res;
    res=new int[num];//DMA for array of size num
    cout<<"Enter marks of students: ";
    cout<<endl;
    for(int i=0;i<num;i++)
    {cin>>*(res+i);
	}
	for(int i=0;i<num;i++)
	{cout<<*(res+i)<<" ";
	}
	delete[] res;//DM Deallocation(DA) for array of any size 
	res=NULL;
	return 0;
}
