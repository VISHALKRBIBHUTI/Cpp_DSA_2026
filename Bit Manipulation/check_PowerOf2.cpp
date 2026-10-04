#include<iostream>
using namespace std;


int checkPowerOf2(int num){

    return (num & (num-1));
}


int main(){

    int num = 32;
    int result = checkPowerOf2(num);

    if(result == 0){
        cout<<num<<" is a Power Of 2 "<<'\n';
    }else{
        cout<<num<<" Is Not a Power Of 2"<<'\n';
    }

    return 0;


}