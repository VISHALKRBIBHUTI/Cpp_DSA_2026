#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> arr , int si , int ei , int target){

    if(si > ei){
        return -1;
    }

    int mid = si + (ei - si)/2;

    if(arr[mid] == target){
        return mid;
    }

    if(arr[mid] > target){
        return search(arr , si , mid -1 , target);
    }
    else{
        return search(arr , mid+1 , ei , target);
    }
}




int main(){

    vector<int> arr = {1 , 2 , 3, 4 , 5 , 6 , 7 , 8 , 9 ,10};
    // int target = 23;
    int target = 8;

    cout<<"Traget Found At Index : "<<search(arr, 0 , arr.size()-1 , target);

    return 0;

}