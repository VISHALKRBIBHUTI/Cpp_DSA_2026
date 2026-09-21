#include<iostream>
using  namespace std;


int main(){

    // char work[50] = "code";
    // cout<<work<<'\n';
    // cout<<sizeof(work)<<'\n';
    // cout<<strlen(work)<<'\n';


    char arr[] = {'h' , 'e' , 'l' , 'l' , 'o'};
    cout<<sizeof(arr)<<'\n';
    // int size = sizeof(arr);
    int i = 0;
    while(i<strlen(arr)){
        cout<<arr[i]<<' ';
        i++;
    }
    cout<<'\n';
}