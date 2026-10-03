#include<iostream>
using namespace std;


int main(){


    int num = 178;

    if((num & 1) == 0){
        cout<<num << " Number is Even"<<'\n';
    }
    else{
        cout<<num<<" Number is Odd"<<'\n';
    }


    return 0;
}