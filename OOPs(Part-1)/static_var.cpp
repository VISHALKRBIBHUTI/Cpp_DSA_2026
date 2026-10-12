#include<iostream>
using namespace std;


void counter(){

    static int count = 0;
    count++;
    cout<<"Count is : "<<count<<'\n';
}

int main(){

    counter();
    counter();
    counter();
}