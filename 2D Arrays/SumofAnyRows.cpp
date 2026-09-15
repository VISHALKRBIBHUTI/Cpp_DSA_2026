#include<iostream>
using namespace std;


int sumOfAnyGivenRows(int mat[][3] , int rows , int column){

    int sum = 0;
    for(int col = 0 ; col<column ; col++){
        sum += mat[rows][col];
    }

    return sum;

}


int main(){

    int mat[3][3] = {{1 , 4 , 9}, 
                {11 , 4 , 3 },
                {2 , 2 , 3}};

    // Let Suppose i have to find the sum of 2nd-rows
    // row you can always less than row size like for 2nd-row pass row = 1
    cout<<"Sum of Second Rows = "<<sumOfAnyGivenRows(mat , 1 , 3);

    return 0;
}