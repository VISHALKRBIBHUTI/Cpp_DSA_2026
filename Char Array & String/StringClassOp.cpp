#include<iostream>
#include<string>
using namespace std;


int main(){

    string str = "hello";
    cout<<str<<'\n';
    str = "Yellow";
    cout<<str<<'\n';

    cout<<"Enter sentences"<<'\n';
    string str2;
    getline(cin , str2 );
    cout<<str2<<'\n';
    // Index Access
    cout<<str2[0]<<'\n';
    cout<<str2[1]<<'\n';
    cout<<str2[2]<<'\n';




    return 0;
}