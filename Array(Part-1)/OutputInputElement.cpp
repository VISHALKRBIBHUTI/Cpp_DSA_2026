#include<iostream>
using namespace std;

int main(){

    int arr[5];
    int size = sizeof(arr)/sizeof(int);
    cout<<"Enter 5 Element/Numbers "<<'\n';

    // Input an Element
    for(int i = 0 ; i<size ; i++){
        cout<<"Enter an Element :"<<'\n';
        cin>>arr[i];
    }

    cout<<"Printing an Element "<<'\n';
    
    // Output an Element
    for(int i = 0 ; i<size ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';


    return 0;
}
