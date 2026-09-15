#include<iostream>
using namespace std;

int printSumofDiagonal(int matrix[3][3]){

    int row = 3;
    int col = 3;

    int sum = 0; 

    // Primary Diagonal
    for(int i = 0 ; i<row ; i++){

        for(int j = 0 ; j<col; j++){

            if(i == j){

                sum += matrix[i][j];

            }
        }
    }

    // Secondary Diagonal
    for(int i = 0; i<row ; i++){

        for(int j = 0 ; j<col; j++){

            if(i!=j &&i+j == col-1){ // i!=j this is done to remove the element that counted TWice

                sum += matrix[i][j];

            }
        }
    }

    return sum;


}

int main(){

    //int matrix[2][2] = {{1 , 2},
    //                    {3 , 4}};
    
    int matrix[3][3] = {{1 , 2 , 3},
                        {4 , 5 , 6},
                        {7 , 8 , 9}}; 

    cout<<"Sum of Diagonal is = "<<printSumofDiagonal(matrix);

    return 0;

}