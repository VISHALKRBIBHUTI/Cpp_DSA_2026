#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int>& arr , int si , int ei , int key){

    int start = si;
    int end = ei;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;
    }

    return ans;
}


int main(){

    vector<int> arr = {0,0,0,0,0,0,0,0,1,1,1,1,1,1};

    int si = 0;//index
    int ei = 1;//index

    while(arr[ei] <= 0){
        si = ei;
        ei = ei * 2;
    }

    int key = 1;
    int found = firstOccurence(arr , si , ei, key); //8

    cout<<"first Occurence of 1 at Index : "<<found<<'\n';

    return 0;
}