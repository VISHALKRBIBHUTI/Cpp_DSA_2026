#include<iostream>
using namespace std;

int fibonacci(int num){

    if(num == 0 || num == 1){
        return num;
    }

    return fibonacci(num - 1) + fibonacci(num - 2);
}

int main(){
    cout<<fibonacci(6)<<'\n';
    cout<<fibonacci(7)<<'\n';
    return 0;
}