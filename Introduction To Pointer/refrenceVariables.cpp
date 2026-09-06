#include<iostream>
using namespace std;

int main(){

    int d = 10;
    cout<<&d<<'\n';

    int a = 30;
    int &b = a;

    b = 60;

    cout<<b<<'\n';
    cout<<a<<'\n';

    return 0;
}