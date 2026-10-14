#include<iostream>
using namespace std;


int friendsPairing(int n){

    if(n == 1 || n ==2){

        return n;
    }


    // stay single ;
    int single = friendsPairing(n - 1);

    // pair form
    int pair = (n-1)*friendsPairing(n-2);

    return single + pair;
}

int main(){

    cout<<friendsPairing(4)<<'\n';
    cout<<friendsPairing(2)<<'\n';
    cout<<friendsPairing(3)<<'\n';
    cout<<friendsPairing(1)<<'\n';
}