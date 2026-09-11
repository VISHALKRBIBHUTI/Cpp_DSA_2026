#include<iostream>
using namespace std;

int binarySearch(int arr[] , int target , int size){

    int s = 0;
    int e = size -1;
    int mid = s + (e - s)/2;

    while(s <= e){

        if(arr[mid] == target){
            return mid; // element found
        }
        else if(target > arr[mid]){
            s = mid + 1; 
        }
        else{
            e = mid - 1;
        }

        mid = s + (e - s)/2;
    }

    return -1 ; // if element not found
}


int main(){

    // Prerequisite : Sorted Array
    int arr[] = {2 , 4 , 6 , 8 , 10 , 12 , 14 , 16};
    int target = 6;
    int size = sizeof(arr)/sizeof(int);

    int found = binarySearch(arr , target , size);

    if(found == -1){
        cout<<"Element Not Found"<<'\n';
    }else{
        cout<<"Element Found At index : "<<found<<'\n';
    }


    return 0;



}