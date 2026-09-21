#include<iostream>
using namespace std;


int main(){

    // char word[] = "ApPle";
    char word[] = "pinEApPLe";

    for(int i = 0 ; word[i]!= '\0'; i++){

        if(word[i] >= 'a' && word[i]<= 'z'){
            word[i] = word[i] - 32;
        }
    }

    cout<<word<<'\n';

    return 0;

}