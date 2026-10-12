#include<iostream>
using namespace std;

void decreasingPrint(int num){

    if(num == 1){
        cout<<num<<" ";
        return;
    }

    cout<<num<<" ";
    decreasingPrint(num - 1);
}

int main(){

    decreasingPrint(10);

    return 0;
}