// Question : For a given integer array of size N. You have to find all the occurrences
// (indices) of a given element (Key) and print them.
// Use a recursive function to solve this problem.
// Sample Input : arr[ ] = {3, 2, 4, 5, 6, 2, 7, 2, 2}, key = 2
// Sample Output : 1 5 7 8


#include<iostream>
#include<vector>
using namespace std;

vector<int> findAllOccurence(vector<int> arr , int start , int end , vector<int>newList , int target){

    if(start > end){
        return newList;
    }

    if(arr[start] == target){
       newList.push_back(start);
    }

    return findAllOccurence(arr , start+1 , end , newList , target);

}

int main(){

    vector<int> arr = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key = 2; 

    vector<int> newlist;

    vector<int> resultList = findAllOccurence(arr , 0 , arr.size()-1 , newlist , key);

    for(int i = 0 ; i<resultList.size(); i++){
        cout<<resultList[i]<<" "; //1 5 7 8 
    }
    cout<<'\n';


    return 0;

}