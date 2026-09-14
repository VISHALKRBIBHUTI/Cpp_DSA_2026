#include<iostream>
#include <algorithm>
using namespace std;


void printArr(int* arr , int size){

    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}


int main(){

    int arr[] = {1 , 4 , 1 , 3 , 2 , 4 , 3 , 7};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Before Sorting "<<'\n';
    printArr(arr , size);

    cout<<"After Sorting "<<'\n';
    // Ascending Order Sort                 
    sort(arr , arr+8);  // first = arr--> included; last = arr+8-->Not Included 
    printArr(arr , size);

    cout<<'\n';



    cout<<"Sorting in Descending Order "<<'\n';
    // Descending Order Sort                  
    sort(arr , arr+8 , greater<int>());
    printArr(arr , size);


    return 0;



}