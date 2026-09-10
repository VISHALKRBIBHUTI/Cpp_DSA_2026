#include<iostream>
using namespace std;


// Swapping Function
int swap(int arr[] , int start , int end){

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}


// Reverse Function
void reverseArray(int arr[] , int size){

    int start = 0;
    int end = size -1;

    while(start < end){
        swap(arr , start , end);
        start++;
        end--;
    }
}


// Printing Function
void printArr(int arr[] , int size){
    for(int i = 0 ; i <size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}




int main(){

    int arr[] = {5 , 4 , 3 , 9 , 2}; //-- result to be 2 9 3 4 5
    int size = sizeof(arr)/sizeof(int);

    cout<<"Before Reverse The Array "<<'\n';
    printArr(arr , size);

    cout<<"After Reverse The Array "<<'\n';
    reverseArray(arr , size);
    printArr(arr , size);

    return 0;


}