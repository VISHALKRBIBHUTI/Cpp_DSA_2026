#include<iostream>
using namespace std;

void sortUsingInsertionSort(char *ch , int size){

    for(int i = 1 ; i<size ; i++){

        char currEle = ch[i];

        int prev = i-1;
        // Descending Sorting of character
        while(prev >= 0 && currEle > ch[prev]){
            ch[prev + 1] = ch[prev];
            prev--; 
        }
        ch[prev + 1] = currEle;
    }
}

void printArr(char* ch , int size){
    for(int i = 0 ; i<size ; i++){
        cout<<ch[i]<<' ';
    }
    cout<<'\n';
}



int main(){

    char ch[] = {'f' , 'b' , 'a' , 'e' , 'c' , 'd'};
    int size = sizeof(ch)/sizeof(char);

    cout<<"Before Sorting "<<'\n';
    printArr(ch , size);

    cout<<"After Sorting "<<'\n';
    sortUsingInsertionSort(ch , size);
    printArr(ch , size);


    return 0;




}