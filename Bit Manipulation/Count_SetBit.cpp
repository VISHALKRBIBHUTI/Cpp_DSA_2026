#include<iostream>
using namespace std;


int NumberOfSetBits(int num){


    int countSetBit = 0;
    while(num > 0){

        if((num & 1) == 1){
            countSetBit++;
        }

       num = num >> 1;

    }

    return countSetBit;
}

int main(){

    cout<<NumberOfSetBits(7)<<'\n';

    return 0;
}