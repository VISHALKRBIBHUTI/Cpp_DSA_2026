#include<iostream>
using namespace std;


void updateIthBit(int num , int i , int val){

    num = num & ~(1 << i); // clear the ith bit

    num = num | (val << i); // set the ith bit

    cout<<num <<'\n';
}


int main(){

    updateIthBit(7 , 2 , 0); //3
    updateIthBit(7 , 3 , 1); //15


    return 0;

}