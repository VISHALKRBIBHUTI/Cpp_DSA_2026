#include<iostream>
using namespace std;


int main(){

    int num = 9;
    int i = 3; //finding what bit at 2nd place is present(0-Based Index)
    int bitmask = 1<<i;

    if((bitmask& num) != 0){
        cout<<"Bit Present At "<<i<<" place is "<<1<<'\n';
    }
    else{
        cout<<"Bit Present At "<<i<<" Place is "<<0<<'\n';
    }

    return 0;


}