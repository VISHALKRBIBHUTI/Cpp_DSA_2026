#include<iostream>
using namespace std;


void Swap(int *arr , int start , int end){

    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
}

void bubbleSort(int *arr , int size){
    int count = 0;

    for(int i = 0 ; i<size-1; i++){
         bool isSorted = true;//reset every pass

        for(int j = 0 ; j<size-i-1; j++){
            // Ascending Order
            if(arr[j] > arr[j+1]){
                Swap(arr , j , j+1);
                isSorted = false;
                count++;
            }

            //  // Dscending Order
            // if(arr[j] < arr[j+1]){
            //     Swap(arr , j , j+1);
            //     isSorted = false;
            // }
        }

        if(isSorted){
            cout<<"So Count is = "<<count <<'\n';
            break;
        }
    }


}


void printArr(int *arr , int size){
    for(int i = 0 ; i <size ; i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}

int main(){

    // int arr[] = {5 , 4 , 1 , 3 , 2};
    int arr[] = {1 , 2 , 3 , 4 ,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Before Sorting "<<'\n';
    printArr(arr , size);
    cout<<"After Sorting "<<'\n';
    bubbleSort(arr , size);
    printArr(arr , size);


    return 0;
}