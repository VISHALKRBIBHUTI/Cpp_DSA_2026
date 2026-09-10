#include<iostream>
using namespace std;

int linearSearch(int arr[] , int element , int size){

    for(int i = 0 ; i<size ; i++){
        
        if(arr[i] == element){

            return i;
        }
    }

    return -1;
}

int main(){

    int arr[] = {2 , 4 , 6 ,10 , 12 , 14 , 16};
    int size = sizeof(arr)/sizeof(int);
    if(linearSearch(arr , 6 , size) == -1){
        cout<<"Element Not Found "<<'\n';
    }
    else{
        cout<<"Element Found At index : "<<linearSearch(arr , 16 , size)<<'\n';
    }

    return 0;

}