#include<iostream>
#include<climits>
//#include<bits/stdc++.h>
using namespace std;

void MaxSubArraySum(int *arr  , int size){

    int sum = 0;
    int maxSum = INT_MIN;
    int minSum = INT_MAX;

    for(int i = 0 ; i<size ; i++){

        for(int j = i; j<size; j++){

            for(int k = i ; k<=j; k++){

                cout<<arr[k]<<' ';
                sum = sum + arr[k];
            }
            cout<<": Total Sum is = "<<sum<<'\n';

            if(sum > maxSum){
                maxSum = sum;
            }

            if(sum < minSum){
                minSum = sum;
            }

            sum = 0;
            
        }

        cout<<'\n';
    }

    cout<<"Maximum Sum of SubArray is = "<<maxSum<<'\n';
    cout<<"Minimum Sum of SubArray is = "<<minSum<<'\n';
}

int main(){

    int arr[] = {2 , -3 , 6 , -5 , 4 , 2};
    int size = sizeof(arr)/sizeof(int);

    MaxSubArraySum(arr , size);


    return 0;
}