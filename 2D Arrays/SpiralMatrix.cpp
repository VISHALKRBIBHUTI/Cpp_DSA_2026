#include<iostream>
using namespace std;


void printSpiralMatrix(int arr[4][4] , int size){

    int rows = 4;
    int cols = 4;


    for(int i = 0 ; i<rows ; i++){

        // Top Left-Right
        for(int j = i ; j<cols-i ; j++){
            cout<<arr[i][j]<<" ";
        }

        // Right Top-Bottom
        for(int k = i+1 ; k<rows-i; k++){
            cout<<arr[k][cols - i - 1]<<" ";
        }

        // Bottom Right-Left
        for(int l = cols-i-2; l>=i ; l--){
            cout<<arr[rows-i-1][l]<<" ";
        }

        // Left Bottom-Top
        for(int m = rows-i-2; m>i ; m--){
            cout<<arr[m][i]<<" ";
        }

    }

}


int main(){

    int arr[4][4] = {{1 , 2 , 3 , 4},
                    {5 , 6 , 7 , 8},
                    {9 , 10 , 11 , 12},
                    {13 , 14 , 15 , 16}};

    printSpiralMatrix(arr , 4);


    return 0;

}