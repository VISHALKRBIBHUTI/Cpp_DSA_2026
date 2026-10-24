#include<iostream>
#include<vector>
using namespace std;

int minimumElement(vector<int>& arr){

    int si = 0;
    int ei = arr.size()-1;
    int mid = si + (ei -si)/2;


    while(si <= ei){

        int prev = (mid + arr.size() -1) % arr.size();
        int next = (mid + 1) % arr.size();

        if(arr[mid] <= arr[prev]  && arr[mid] <= arr[next]){

            return mid;
        }

        if(arr[mid] > arr[ei]){
            si = mid + 1;
        }
        else{
            ei = mid -1;
        }

        mid = si + (ei -si)/2;

    }

    return 0;
}


int binarySearch(vector<int> & arr , int si , int ei , int target){
    // target = 18

    int mid = si + (ei -si)/2;

    while(si <= ei){

        if(arr[mid] == target){
            return mid;
        }

        if(arr[mid ] > target){
            ei = mid -1;
        }
        else{
            si = mid + 1;
        }

        mid = si + (ei -si)/2;
    }

    return -1;
    
}


int main(){

    vector<int> arr = {11 , 12 , 15 , 18 , 2 , 5 , 6 , 8};
    int target = 12;

    // cout<<"Number of time Array is Rotated is : "<<minimumElement(arr)<<'\n';
    int index = minimumElement(arr);

    int rightSide = binarySearch(arr , index , arr.size()-1 , target);
    int leftSide = binarySearch(arr , 0 , index -1 , target);

    if(rightSide >= 0){
        cout<<"Element Found At Index : "<< rightSide<<'\n';
    }
    else if (leftSide >= 0){
        cout<<"Element Found At Index : "<< leftSide<<'\n';
    }
    else{
         cout<<"Element Not Found At Valid Index" <<'\n';
    }

    return 0;
}