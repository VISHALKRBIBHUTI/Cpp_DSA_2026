#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> arr , int idx , int element){

    if(idx == arr.size()){
        return -1;
    }

    if(arr[idx] == element){
        return idx;
    }

    return firstOccurence(arr , idx+1 , element);
}

int main(){

    vector<int> arr = {1 , 2 ,3 , 4 ,5 , 5};
    int key = 5;
    cout<<"First Time "<<key<<" Found At Index : "<<firstOccurence(arr , 0 , key);

    return 0;
}