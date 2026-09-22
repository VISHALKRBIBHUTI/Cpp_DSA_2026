#include<iostream>
using namespace std;

bool checkPalindrome(char ch[] , int size){

    int start = 0;
    int end = size-1;

    while(start < end){

        if(ch[start] != ch[end]){
            return false;
        }

        start++;
        end--;
    }

    return true;
}


int main(){

    // char ch[] = "apple";
    char ch[]= "racecar";
    // char ch[] = "mam";
    // char ch[] = "NOON";

    cout<<boolalpha<<'\n';

    cout<<"Is "<<ch<<" is Palindrome ? : "<<checkPalindrome(ch , strlen(ch))<<'\n';


    return 0;
}