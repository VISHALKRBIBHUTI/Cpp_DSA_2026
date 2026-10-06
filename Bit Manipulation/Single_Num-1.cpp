#include<bits/stdc++.h>
using namespace std;


int singleOccurence(const vector<int>& arr){

    int appearOnce = 0;
    for(int i =0; i<arr.size(); i++){
        appearOnce = appearOnce ^ arr[i];
    }

    return appearOnce;
}


int main(){

    int n;
    cin>>n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout<<singleOccurence(arr);

}