#include<iostream>
#include<vector>
using namespace std;


int partition(vector<int>& arr, int si , int ei){

    int pivot = arr[ei];
    int itr = si - 1;

    for(int j = si ; j<ei ; j++){


        // Ascending Sort
        if(arr[j] <= pivot){

            itr++;
            swap(arr[itr] , arr[j]);
        }

        //  // Descending Sort
        // if(arr[j] >= pivot){

        //     itr++;
        //     swap(arr[itr] , arr[j]);
        // }
    }

    itr++;
    swap(arr[itr] , arr[ei]);

    return itr;
}


void QuickSort(vector<int>& arr , int si , int ei){

    if(si >= ei){
        return;
    }

    int pivotIdx = partition(arr , si , ei);
    QuickSort(arr , si , pivotIdx - 1); // left half
    QuickSort(arr , pivotIdx + 1 , ei); // right half
}


void printArray(vector<int>& arr){

    for(int i =0 ; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}



int main(){

    vector<int> arr = {6 , 3 , 7 , 5 , 2 , 4};
    int ei = arr.size()-1;

    cout<<"Before Sorting "<<"\n";
    printArray(arr );

    cout<<"After Sorting "<<'\n';
    QuickSort(arr , 0 , ei);
    printArray(arr);


    return 0;

}