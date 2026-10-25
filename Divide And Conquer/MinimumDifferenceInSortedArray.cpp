#include<iostream>
#include<vector>
using namespace std;

int firstOccurence(vector<int> & arr , int key){

    int si = 0;
    int ei = arr.size()-1;
    int mid = si + (ei - si)/2;
    int ans = -1;

    while(si <= ei){

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] < key){
          ans = mid;
          si = mid + 1;  
        }
        else{
            ei = mid - 1;
        }

        mid = si + (ei - si)/2;
    }

    return ans;

}


int lastOccurence(vector<int> & arr , int key){

    int si = 0;
    int ei = arr.size()-1;
    int mid = si + (ei - si)/2;
    int ans = -1;

    while(si <= ei){

        if(arr[mid] == key){
            return mid;
        }

        if(arr[mid] > key){
          ans = mid;
          ei = mid - 1;  
        }
        else{
            si = mid + 1;
        }

        mid = si + (ei - si)/2;
    }

    return ans;

}




int main(){
    vector<int> arr = {1 , 3 , 8 , 10 , 15};
    int key = 5;
    
    int firstOccur  = firstOccurence(arr , key);
    int lastOccur = lastOccurence(arr , key);

    int first = abs(key - arr[firstOccur]);
    int last = abs(key - arr[lastOccur]);

    if(first < last){
        cout<<"Minimum difference is Found With Element : "<<arr[firstOccur]<<'\n';
    }
    else{
        cout<<"Minimum difference is Found With Element : "<<arr[lastOccur]<<'\n'; 
    }
    
    return 0;

}