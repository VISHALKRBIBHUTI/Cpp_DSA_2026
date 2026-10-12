#include<iostream>
#include<vector>
using namespace std;


bool isArraySorted(vector<int> arr , int idx){

    if(idx == arr.size()-1){  //Base Case
        return true;
    }

    if(arr[idx]>arr[idx+1]){
        return false;
    }

    return isArraySorted(arr , idx + 1);
}

int main(){

    //vector<int> arr = {1 , 2 , 3 , 4 ,5};
    vector<int> arr = {1 , 2 , 3 , 5 ,4};

    bool isSorted = isArraySorted(arr , 0);

    if(isSorted){
        cout<<"Array is Sorted "<<'\n';
    }
    else{
        cout<<"Array is Not Sorted "<<'\n';
    }

    return 0;
}