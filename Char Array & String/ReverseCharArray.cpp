#include<iostream>
using namespace std;


void Swap(char ch[] , int start , int end){

    char temp = ch[start];
    ch[start] = ch[end];
    ch[end] = temp;
}

void reverseCharArr(char ch[] , int size){

    int start = 0;
    int end = size-1;

    while(start < end){

        Swap(ch , start , end);

        start++;
        end--;
    }
}


void printCharArr(char ch[] , int size){

    for(int i = 0 ; i<size; i++){

        cout<<ch[i]<<" ";
    }
    cout<<'\n';
}


int main(){

    char ch[] = {'c' , 'o' , 'd' , 'e' , '\0'};

    cout<<"Before Reversing "<<'\n';
    printCharArr(ch , strlen(ch));


    cout<<"After Reversing "<<'\n';
    reverseCharArr(ch, strlen(ch));
    printCharArr(ch , strlen(ch));



    return 0;
}