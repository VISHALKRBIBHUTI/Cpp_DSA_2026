#include<iostream>
using namespace std;


void increasePrint(int num){

    if(num == 1){
        cout<<num<<" ";
        return;
    }
    increasePrint(num - 1);
    cout<<num<<" ";
}


int main(){

    increasePrint(10);

    return 0;

}