#include<iostream>
using namespace std;

int kandesMaxSum(int *arr , int size){

    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0 ; i<size ; i++){

        currSum = currSum + arr[i];


        maxSum = max(currSum , maxSum);

        if(currSum < 0){
            currSum = 0;
        }
    }

    return maxSum;
}

int main(){

    //int arr[] = {5 , -3 , 4};
    int arr[] = {2 , -3 , 4};
    int size = sizeof(arr)/sizeof(int);

    cout<<"Max SubArray Sum = "<<kandesMaxSum(arr , size);


    return 0;

}