#include<iostream>
using namespace std;

int main(){

    int stu[2][2] = {{1 , 2},
                    {3 , 4}};

    int size = sizeof(stu)/sizeof(int); //entire 2D-array size
    int row = sizeof(stu)/sizeof(stu[0]); // Total Number of rows
    int cols = sizeof(stu[0])/sizeof(stu[0][0]);//Total number of columns

    for(int i = 0 ; i <row ; i++){

        for(int j = 0 ; j<cols; j++){

            cout<<stu[i][j]<<' ';
        }

        cout<<'\n';

    }

    return 0;

}