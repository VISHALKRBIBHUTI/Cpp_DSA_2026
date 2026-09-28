#include<iostream>
using namespace std;

int* func(){

    int *ptr = new int;
    *ptr = 1200;

    cout<<"*ptr points to "<<*ptr<<'\n';

    delete ptr;

    return ptr;
}

int main(){

    int *x = func();
    cout<<*x<<'\n';
}