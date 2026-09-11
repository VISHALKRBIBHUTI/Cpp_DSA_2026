#include<iostream>
using namespace std;

int main(){

    char ch = 'a';
    char *cptr = &ch;
    cout<<cptr;
    cptr++;
    cout<<'\n';
    cout<<cptr;

    cout<<'\n';

    int x = 10;
    int* ptr = &x;
    cout<<ptr<<'\n';
    ptr++;
    cout<<ptr;


    return 0;
}