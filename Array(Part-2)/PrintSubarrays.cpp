#include<iostream>
using namespace std;


void printSubarray(int *arr , int size){

    int totalSubarray = 0;

    for(int i = 0 ; i<size ; i++){

        for(int j = i ; j<size ; j++){

            for(int k = i ; k<=j ; k++){

                cout<<arr[k]<<' ';
            }
            totalSubarray++;
            cout<<'\n';
        }

        cout<<'\n';
    }

    cout<<"Total Subarray = "<<totalSubarray<<'\n';

}

int main(){

    int arr[] = {1, 2 , 3 ,4 , 5};
    int size = sizeof(arr)/sizeof(int);

    printSubarray(arr , size);

    return 0;
}
