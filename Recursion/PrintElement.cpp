#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> arr , int idx){

    if(idx == arr.size()){
        return;
    }
    cout<<arr[idx]<<" ";

    printArray(arr , idx+1);

}



int main(){

    // int arr[] = {1 , 2 , 3 ,4  ,5};
    vector<int> arr = {1 , 2 , 3 , 4 , 5};
    printArray(arr , 0);
    return 0;

}