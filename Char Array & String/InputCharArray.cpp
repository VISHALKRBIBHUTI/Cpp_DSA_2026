#include<iostream>
using namespace std;


int main(){

    // char word[50];
    // cin>>word;

    // cout<<"Your Word is : "<<word<<'\n';
    // cout<<"length of word is :"<<strlen(word)<<'\n';

    char sentence[50];
    cin.getline(sentence , 50 , '.');

    cout<<"Your Sentence : "<<sentence<<'\n';
    cout<<"Length of Sentence : "<<strlen(sentence)<<'\n';
    

    return 0;

}