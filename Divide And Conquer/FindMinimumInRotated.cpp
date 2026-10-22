#include<iostream>
#include<vector>
using namespace std;

int findMinimum(vector<int>& arr , int si , int ei){

    // base case
    if(si == ei){
        return arr[si];
    }

    int mid = si + (ei - si)/2;

    if(arr[mid] > arr[ei]){
        return findMinimum(arr , mid + 1 , ei);
    }
    else{
        return findMinimum(arr , si , mid);
    }
}



int main(){

    // vector<int> arr = {4, 5, 6, 7, 1, 2, 3};
    vector<int> arr = {11 , 13 ,15 , 17};

    cout<<"Minimum in Array is : "<<findMinimum(arr , 0 , arr.size()-1);

    return 0;
}