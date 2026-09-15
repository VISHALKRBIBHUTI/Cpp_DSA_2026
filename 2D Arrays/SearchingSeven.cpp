#include<iostream>
using namespace std;


int main(){

    int row = 2;
    int col = 3;
    int mat[2][3] = {{4 , 7 , 8},
                    {8 , 8 , 7}};

    int count = 0;
    for(int i = 0 ; i<row ; i++){

        for(int j = 0 ; j<col; j++){

            if(mat[i][j] == 7){
                count++;
            }
        }
    }


    cout<<"Number of 7 present in a Matrix = "<<count<<'\n';

    return 0;
}