#include<iostream>
#include<vector>
using namespace std;

vector<int> findIN2D(vector<vector<int>>& arr, int row , int col , int target){

    int i = 0;
    int j = col - 1;

    while((i >= 0 && i < row)  && (j >= 0 && j<col)){

        if(arr[i][j] == target){
            return {i , j};
        }
        else if (arr[i][j] > target){
            j--;
        }
        else if(arr[i][j] < target){
            i++;
        }
    }

    return {-1 , -1};

}

int main(){
    vector<vector<int>> matrix = {{10 , 20 , 30 , 30} , {15 , 25 , 35 , 45 } ,
                            {27 , 29 , 37 , 48 } , {32 , 33 , 39 , 50}};
    
    int target = 29;

    vector<int> index = findIN2D(matrix , 4 , 4 , target);
    cout << "Element Found At Index : [" << index[0] << ", " << index[1] << "]";

    return 0;
}