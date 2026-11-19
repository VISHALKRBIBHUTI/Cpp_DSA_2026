#include<iostream>
#include<vector>
using namespace std;

void increaseDecreaseElement(vector<int>&arr , int ptr){

    if(ptr >= arr.size()){
        return;
    }

    arr[ptr] = ptr + 1;

    increaseDecreaseElement(arr , ptr+1);
    arr[ptr] = arr[ptr] -2;
}

void printArray(vector<int>&arr){
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}


int main(){

    vector<int> arr(5);
    increaseDecreaseElement(arr , 0);
    printArray(arr);
    return 0;

}