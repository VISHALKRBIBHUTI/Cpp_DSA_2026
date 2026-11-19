#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>&arr){
    for(int i =0; i<arr.size(); i++){
        cout<<arr[i]<<' ';
    }
    cout<<'\n';
}

void changeArray(vector<int>&arr , int ptr){

    if(ptr >= arr.size()){
        printArray(arr);
        return;
    }

    arr[ptr] = ptr + 1;

    changeArray(arr , ptr+1);
    arr[ptr] = arr[ptr] -2;
}



int main(){

    vector<int> arr(5);
    changeArray(arr , 0);
    printArray(arr);
    return 0;

}