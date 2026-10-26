#include<iostream>
#include<vector>
using namespace std;

int increasingOrderBinarySearch(vector<int>& arr ,int low , int high , int target){

    int si = low;
    int ei = high;
    while(si <= ei){
        int mid = si + (ei - si)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            ei = mid -1;
        }
        else{
            si = mid + 1;
        }
    }

    return -1;
}

int decreasingOrderBinarySearch(vector<int>& arr ,int low , int high ,  int target){

    int si = low;
    int ei = high;
    while(si <= ei){
        int mid = si + (ei - si)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            si = mid + 1;
        }
        else{
            ei = mid - 1;
        }
    }

    return -1;
}

int bitonicPoint(vector<int>&arr){

    if(arr.size() == 1){
        return 0;
    }

    int si = 0;
    int ei = arr.size()-1;

    while(si <= ei){

        int mid = si + (ei - si)/2;

        if(0 < mid && mid < arr.size()-1){

            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]){
                return mid;
            }
            else if(arr[mid] < arr[mid + 1]){
                si = mid + 1;
            }
            else{
                ei = mid - 1;
            }
        }
        else if(mid == 0){ // at 0 index
            if(arr[0] > arr[1]){
                return 0;
            }
            else{
                return 1;
            }
        }
        else if(mid == arr.size()-1){ // at ei = arr.size()-1

            if(arr[arr.size()-1] > arr[arr.size()-2]){
                return arr.size()-1;
            }
            else{
                return arr.size()-2;
            }
        }
    }

    return -1;
}


int main(){

    //vector<int> arr = {1,2,3,4,5,3,1};
    vector<int> arr = {0,1,2,4,2,1};
    int target = 3;

    int index = bitonicPoint(arr);

    int first = increasingOrderBinarySearch(arr , 0 , index-1 , target);
    int last = increasingOrderBinarySearch(arr , index , arr.size()-1 , target);

    if(first < last && first >=0){
        cout<<"Minimum index of Element Found at : "<<first <<'\n';
    }
    else if( first > last && last >= 0){
        cout<<"Minimum index of Element Found at : "<<last<<'\n';
    }
    else{
        cout<<"Element Not Found At Valid index : "<<-1<<'\n';
    }

    return 0;
}