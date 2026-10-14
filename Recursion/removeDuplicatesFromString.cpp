#include<iostream>
#include<vector>
using namespace std;

string removeDuplicates(string s , int idx , string str , vector<bool> arr){

    if(idx == s.size()){
        return str;
    }

    int pos = s.at(idx) - 'a';
    if(arr[pos] == false){
        str = str + s.at(idx);
        arr[pos] = true;
    }

    return removeDuplicates(s , idx+1 , str , arr);
}



int main(){

    // vector<bool> arr(5); //all are false
    // cout<<arr[0]<<'\n';
    // cout<<arr[1]<<'\n';
    // cout<<arr[2]<<'\n';
    // cout<<arr[3]<<'\n';
    // cout<<arr[4]<<'\n';

    string s = "appnnacollege";
    int idx = 0;
    string str = "";
    vector<bool> arr(26);

    cout<<removeDuplicates(s , idx , str , arr);

    return 0;
   
    
}