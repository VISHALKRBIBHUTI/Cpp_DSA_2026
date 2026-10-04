#include<iostream>
using namespace std;


int main(){

    int num = 6;
    int i = 3;

    int bitmask = 1<<3;

    cout << (num | bitmask)<<'\n';


    return 0;
}