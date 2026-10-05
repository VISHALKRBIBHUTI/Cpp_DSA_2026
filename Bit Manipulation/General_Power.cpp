#include<iostream>
using namespace std;


int power(int base , int exp){

    if(exp == 0){
        return 1;
    }
    if(exp == 1){
        return base;
    }

    int powerCal = power(base , exp/2);

    if(exp%2==0){
        return powerCal * powerCal;

    }

    return base * powerCal * powerCal;
}

int main(){

    cout<<power(2 , 5)<<'\n';

    return 0;
}