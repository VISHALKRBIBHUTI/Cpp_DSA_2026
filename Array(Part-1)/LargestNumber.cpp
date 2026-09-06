#include<iostream>
#include<climits>
using namespace std;

int main(){

    int arr[] = {5 , 4 , 3 , 9 , 2};
    int length = sizeof(arr)/sizeof(int);

    int  maxValue = INT_MIN;
    for(int i = 0 ; i<length ; i++){

        if(arr[i] > maxValue){
            maxValue = arr[i];
        }
    }

    cout<<"Largest Number in This Array is : "<< maxValue<<'\n';

    return 0;

}