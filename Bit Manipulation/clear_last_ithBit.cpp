#include<iostream>
using namespace std;


int clearLastIthBit(int num , int i){

    int bitmask = (~(0) << i);

    return num & bitmask;
}

int main(){

    cout<<clearLastIthBit(15 , 2)<<'\n';

    return 0;
}