#include<iostream>
using namespace std;

void changeVal(int *ptr){

    *ptr = 20;

}

int main(){

    int val = 10;
    cout<<"Before "<<'\n';
    cout<<val<<'\n';

    cout<<"After Function Call"<<'\n';
    changeVal(&val);
    cout<<val<<'\n';

    return 0;
    
}