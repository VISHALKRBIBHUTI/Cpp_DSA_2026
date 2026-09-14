#include<iostream>
using namespace std;

void Swap(int &val1 , int &val2){

    int temp = val1;
    val1 = val2;
    val2 = temp;
}

void insertionSort(int *arr , int size){

    for(int i = 1 ; i<size ; i++){

        int currEle = arr[i];

        int prev = i-1;
        while(prev >=0 && currEle < arr[prev]){

            Swap(arr[prev] , arr[prev+1]);
            prev--;
            
        }

        arr[prev + 1] = currEle;
    }
}


void printArr(int *arr , int size){
    for(int i = 0 ; i<size ; i++){
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
    insertionSort(arr , size);
    printArr(arr, size);



    return 0;


}