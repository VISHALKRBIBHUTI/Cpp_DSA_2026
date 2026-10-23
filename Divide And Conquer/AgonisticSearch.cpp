#include<iostream>
#include<vector>
using namespace std;

int ascendingSearch(vector<int>&arr , int si , int ei , int target){

    if(si > ei){
        return -1;
    }

    int mid = si + (ei -si)/2;

    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return ascendingSearch(arr , si , mid -1 , target);
    }
    else{
        return ascendingSearch(arr , mid+1 , ei , target);
    }
}


int descendingSearch(vector<int>&arr , int si , int ei , int target){

    if(si > ei){
        return -1;
    }

    int mid = si + (ei -si)/2;

    if(arr[mid] == target){
        return mid;
    }
    if(arr[mid] > target){
        return descendingSearch(arr , mid+1 , ei , target);
    }
    else{
        return descendingSearch(arr , si , mid -1  , target);
    }
}




int agonisticSearch(vector<int>& arr  , int si  ,int ei , int target){


    if (arr.size() == 0) {
        return -1;
    }

    if(arr.size() == 1){

        if(arr[si] == target){
            return si;
        }

        return -1;
    }


    // if array is in ascending order and  (size >= 2)
    if(arr[si] < arr[ei]){
        return ascendingSearch(arr , si , ei , target);
    }
    else{
        return descendingSearch(arr , si , ei , target);
    }

}


int main(){

    // vector<int> arr = {1};
    // // int target = 1;
    // int target = 4;
    // cout<<"Element Found At Index : "<< agonisticSearch(arr , 0 , arr.size()-1 , target);


    // when array size>=2 and in Ascending Order
    // vector<int> arr1 = {1 , 2  ,3 ,4};
    // int target = 4;
    // cout<<"Element Found At Index : "<< agonisticSearch(arr1 , 0 , arr1.size()-1 , target);
    // return 0;

    // when array size>=2 and in Descending Order
    vector<int> arr ={5 , 4 , 3 , 2 , 1};
    int target = 5;
    cout<<"Element Found At Index : "<< agonisticSearch(arr , 0 , arr.size()-1 , target);
    
}