#include<iostream>
using namespace std;

void Swap(int *arr , int start , int end){

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}


void selectionSort(int *arr , int size){

    for(int i = 0 ; i<size-1 ; i++){

        int minIdx = i;

        for(int j = i+1 ; j<size ; j++){

            if(arr[minIdx] >arr[j]){
                minIdx = j;
            }
        }

        Swap(arr , i , minIdx);
    }

}


void printArr(int *arr , int size){
    for(int i = 0 ; i <size ; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}



int main(){

    int arr[] = {5 , 4 , 1 , 3 , 2};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Before Sorting "<<'\n';
    printArr(arr , size);

    cout<<"After Sorting "<<'\n';
    selectionSort(arr , size);
    printArr(arr , size);


    return 0;


}