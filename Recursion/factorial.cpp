#include<iostream>
using namespace std;

int factorial(int num){

    if(num == 0){
        return 1;
    }

    return num *factorial(num - 1);
}


int main(){

    cout<<factorial(4)<<'\n';
    cout<<factorial(5)<<'\n';
    cout<<factorial(6)<<'\n';


    return 0;
    
}