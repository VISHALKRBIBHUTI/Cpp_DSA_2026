#include<iostream>
using namespace std;

void maxSubArraySum2(int *arr , int size){

    int maxSum = INT_MIN;
    int minSum = INT_MAX;

    for(int i = 0 ; i <size ; i++){
        int currSum = 0;
        for(int j = i ; j<size ; j++){
            currSum = currSum + arr[j];
            maxSum = max(currSum , maxSum);
            minSum = min(currSum , minSum);
        }
    }

    cout<<"Maximum SubArray Sum is = "<<maxSum<<'\n';
    cout<<"Minimum SubArray Sum is = "<<minSum<<'\n';


}

int main(){

    int arr[] = {2 , -3 , 6 , -5 , 4 , 2};
    int size = sizeof(arr)/sizeof(int);

    maxSubArraySum2(arr , size);


    return 0;


}