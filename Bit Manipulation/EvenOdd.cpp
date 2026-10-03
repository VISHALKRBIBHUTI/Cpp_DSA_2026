#include<iostream>
using namespace std;


int main(){


    int num = 144;

    if((num & 1) == 0){
        cout<<num<<" is Even Number "<<'\n';
    }
    else{
        cout<<num<<" is Odd Number "<<'\n';
    }

    return 0;
}