#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    for(int i = 0 ; i<5; i++){
        v.push_back(i);
    }

    cout<<v.size()<<'\n';
    cout<<v.capacity()<<'\n';
    



    return 0;
}