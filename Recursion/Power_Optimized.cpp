#include<iostream>
using namespace std;


int power(int base , int exp){

    if(exp == 0){
        return 1;
    }
    if(exp == 1){
        return base;
    }

    int halfpwr =  power(base , exp/2);

    if(exp%2==0){

        return halfpwr * halfpwr;

    }

    return base * halfpwr * halfpwr;
}

int main(){

    cout<<power(2 , 3)<<'\n';
    cout<<power(2 , 5)<<'\n';
    cout<<power(3 , 3)<<'\n';
    cout<<power(3 , 4)<<'\n';
    cout<<power(2 , 10)<<'\n';
    

    return 0;
}