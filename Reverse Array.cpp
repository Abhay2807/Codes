//Program to reverse an Array (all elements present in it)
#include<iostream>
using namespace std;


void reverseArray(int arr[], int N){

        for(int i = 0; i < N/2; i++){
        int temp = arr[i];
        arr[i] = arr[N-i-1];
        arr[N-i-1] = temp;
    }
    return;
    
}



int main()  {
    int N;
    cin>>N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin>>arr[i];
    }
    reverseArray(arr, N);
    for(int i = 0; i < N; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
