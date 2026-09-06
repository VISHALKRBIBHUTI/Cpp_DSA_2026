#include<iostream>
using namespace std;

int main(){

    // int a = 10;
    // cout<<&a<<'\n';

    int a = 30;
    int &b = a;

    b = 60;

    cout<<b<<'\n';
    cout<<a<<'\n';

    return 0;
}