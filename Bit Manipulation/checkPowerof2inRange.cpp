#include<iostream>
using namespace std;


int isPowerOf2(int num){

    return (num & (num-1));
}

void inRange(long long num) {

    long long i = 1;

    while (i <= num) {
        cout << i << " ";
        i = i << 1;
    }
}

int main(){

    long long n;
    cin>>n;
    inRange(n);

    return 0;
}