#include<iostream>
#include<vector>
using namespace std;

int searchInRotatedSorted(vector<int> arr , int si , int ei , int target){

    if(si > ei){
        return -1;
    }

    int mid = si + (ei - si)/2;

    if(arr[mid] == target){
        return mid;
    }

    // mid on line1
    if(target <= arr[mid]){ // left half is Sorted

        if(arr[si]<= target && target < arr[mid]){
            return searchInRotatedSorted(arr , si , mid-1 , target);
        }
        else{
            return searchInRotatedSorted(arr , mid + 1 , ei, target);
        }
    }

    // mid on line2
    else{ // Right Half is Sorted

        if(arr[mid] < target && target <= arr[ei]){
            return searchInRotatedSorted(arr , mid + 1 , ei, target);
        }
        else{
           return searchInRotatedSorted(arr , si, mid - 1, target); 
        }
    }


}


int main(){

    vector<int> arr = {4 , 5 , 6 ,7 , 0 , 1 , 2};

    int target = 0;

    int found = searchInRotatedSorted(arr , 0 , arr.size()-1 , target);

    if(found > 0){
        cout<<"Element Found At Index : "<<found<<'\n';
    }
    else{
        cout<<"Element Found At Index : "<<found<<'\n';
    }


}