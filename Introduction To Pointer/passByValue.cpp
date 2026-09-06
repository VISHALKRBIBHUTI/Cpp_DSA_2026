#include<iostream>
using namespace std;

void changeA(int val){
    val = 15;
    cout<<val<<'\n';
}

int main(){

    int val = 20;
    changeA(val);
    cout<<val<<'\n';

    return 0;
}