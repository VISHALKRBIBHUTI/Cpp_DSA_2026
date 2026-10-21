#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr , int si , int mid , int ei){

    int i = si;
    int j = mid+1;
    vector<int> temp;

    while(i <= mid && j<=ei){

        if(arr[i] <= arr[j]){
            temp.push_back(arr[i++]);
        }
        else{
            temp.push_back(arr[j++]);
        }
    }

    // Left Half--> left element
    while(i <= mid){
        temp.push_back(arr[i++]);
    }

    // Right Half--> Left Element
    while(j <= ei){
        temp.push_back(arr[j++]);
    }

    // copying to original Array
    for(int idx = si , x = 0 ; idx<=ei ; idx++){
        arr[idx] = temp[x++];
    }


}


void mergeSort(vector<int>& arr , int si , int ei){

    if(si >= ei){
        return ;
    }

    int mid = si + (ei - si)/2;

    mergeSort(arr , si , mid);
    mergeSort(arr , mid+1 , ei);
    merge(arr , si , mid , ei);
}



void printArray(vector<int>& arr){
    for(int i =0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

int main(){

    vector<int> arr = {6 , 3 , 7 , 5 , 2 , 4};

    cout<<"Before Sorting "<<'\n';
    printArray(arr);

    cout<<"After Sorting "<<'\n';
    mergeSort(arr , 0 , arr.size()-1);
    printArray(arr);


    return 0;

}