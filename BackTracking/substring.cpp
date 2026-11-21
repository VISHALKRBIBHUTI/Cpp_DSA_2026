#include<iostream>
using namespace std;

int main(){

    string str = "HELLO";
    cout<<str.substr(2 , str.size()-2);
    cout<<'\n';
    cout<<str.substr(2);
    return 0;
}