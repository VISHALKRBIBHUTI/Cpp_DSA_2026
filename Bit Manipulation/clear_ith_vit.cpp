#include<iostream>
using namespace std;


int clearithBit(int num , int i){

    int bitmask = ~(1<<i);

    return num & bitmask;
}

int main(){

    cout<<clearithBit(6 , 1)<<'\n'; //5


    return 0;

}