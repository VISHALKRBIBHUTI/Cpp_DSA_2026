#include<iostream>
using namespace std;

void stairCaseSearch(int mat[4][4] , int key){

    int row = 4;
    int col = 4;

    int i = 0;
    int j = col -1;
    while(i<row && j>=0){

        if(key == mat[i][j]){
            cout<<"Found Element At "<<"("<<i<<" , "<<j<<")";
            return ;
        }

        else if(key > mat[i][j]){
            // Down
            i++;
        }
        else{
            // Left
            j--;
        }
    }

    cout<<"Element Not Found in Matrix "<<'\n';


}


int main(){

    int arr[4][4] = {{10 , 20 , 30 , 40} , 
                    {15 , 25 , 35 , 45},
                    {27 , 29 , 37 , 48},
                    {32 , 33 , 39 , 50}};

    // Find the element key = 33 return its index;

    stairCaseSearch(arr , 60);

    return 0;
}