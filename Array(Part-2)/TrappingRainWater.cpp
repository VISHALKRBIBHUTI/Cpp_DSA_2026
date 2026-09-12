#include<iostream>
using namespace std;


int trappingRainWater(int *height , int size){

    // Calculating Left Max Height
    int leftMax[size];
    leftMax[0] = height[0];
    for(int i = 1 ; i<size ; i++){
        leftMax[i] = max(leftMax[i-1] , height[i-1]);
    }
    // Printing Left Max Boundary
    cout<<"Left Max Boundary "<<'\n';
    for(int i = 0 ; i<size ; i++){
        cout<<leftMax[i]<<" ";
    }

    cout<<'\n';


    // Calculating Right Max Boundary
    int rightMax[size];
    rightMax[size-1] = height[size-1];
    for(int i = size-2 ; i>=0; i--){
        rightMax[i] = max(rightMax[i+1] , height[i+1]);
    }

    // Printing Right Max Boundary
    cout<<"Right Max Boundary "<<'\n';
    for(int i = 0 ; i<size ; i++){
        cout<<rightMax[i]<<" ";
    }

    cout<<'\n';
    // Calculating Total Water Trapped
    int totalWaterTrapped = 0;
    for(int i = 0 ; i<size; i++){

        int waterTrapped = min(leftMax[i] , rightMax[i]) - height[i];
        if(waterTrapped<0){
            waterTrapped = 0;
        }

        totalWaterTrapped += waterTrapped;
    }


    return totalWaterTrapped;


}


int main(){

    // int height[] = {4 , 2 , 0 , 6 , 3 , 2 , 5};
    int height[] = {5 , 4 , 3 , 2 , 1}; // No Water Trapped in this Case
    int size = sizeof(height)/sizeof(int);
    int Total_Water_Trapped = trappingRainWater(height , size);

    cout<<"Amount of Water Trapped is = "<<Total_Water_Trapped;


    return 0;


}