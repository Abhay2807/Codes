// Program to Understand, Basics of Dynamic Memory Allocation(DMA)
#include<iostream>
#include<climits>
using namespace std;

int main()
{
	// declare an int pointer
int* pointVar;

// dynamically allocate memory
// for an int variable 
pointVar = new int;

// assign value to the variable memory
*pointVar = 45;

// print the value stored in memory
cout << *pointVar; // Output: 45

// deallocate the memory
delete pointVar;

// declare an int pointer
    int* pointInt;

    // declare a float pointer
    float* pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.455788;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
    delete pointFloat;
		
	
int *abhay;
abhay=new int;
*abhay=28;
cout<<*abhay;
delete abhay;
	
return 0;	
}
