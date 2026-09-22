#include<iostream>
#include<string>
using namespace std;

int main(){

    string str = "Hello";
    
    cout<<str.length()<<'\n'; // 5
    cout<<str[1]<<'\n'; //e
    cout<<str.at(1)<<'\n'; //e
    cout<<str.substr(1,3)<<'\n'; //ell

    cout<<"----------------"<<'\n';
    string str2 = "I Love C++ & Java";
    cout<<str2.find("C++")<<'\n'; //7 Index of First Occurence
    cout<<str2.find("c++")<<'\n'; // 
    cout<<str2.find("Python")<<'\n'; //
}