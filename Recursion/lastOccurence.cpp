#include<iostream>
#include<vector>
using namespace std;


int lastOccurence(vector<int> arr , int idx , int key){

    if(idx == arr.size()){
        return -1;
    }

    int found = lastOccurence(arr , idx+1 , 3);
    if(found == -1 && arr[idx] == key){
        found = idx;
    }

    return found;
}

int main(){

    vector<int> arr = {1 , 2 , 3 , 3 , 4};
    int lastKey = 3;

    cout<<"Last Time "<<lastKey<<" Occur At Index : "<<lastOccurence(arr , 0 , lastKey);

    return 0;
}