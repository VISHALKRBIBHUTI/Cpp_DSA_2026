#include<iostream>
using namespace std;


int tilingProblem(int n){  // 2*n

    // base case
    if(n == 0 || n == 1){
        return 1;
    }


    // Placing a tile Vertically
    int tileVertical = tilingProblem(n - 1);


    // Placing a tile Horizontally
    int tileHorizontal = tilingProblem(n - 2);

    return tileVertical + tileHorizontal;
}


int main(){

    cout<<tilingProblem(0)<<'\n';
    cout<<tilingProblem(1)<<'\n';
    cout<<tilingProblem(2)<<'\n';
    cout<<tilingProblem(3)<<'\n';
    cout<<tilingProblem(4)<<'\n';


    return 0;

}