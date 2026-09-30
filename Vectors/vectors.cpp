#include<iostream>
#include<vector>
using namespace std;


int main(){

    // vector<int> vec1;
    // cout<<"size of vec1 : " <<vec1.size()<<'\n';


    // vector<int> vec2 = {1 , 2 , 3 , 4};
    // cout<<"size of vec2 : " <<vec2.size()<<'\n';



    // vector<int> vec3(5 , -1);
    // cout<<"size of vec3 : " <<vec3.size()<<'\n';
    // // printing element inside vec3
    // for(int i = 0 ; i<vec3.size() ; i++){
    //     cout<<vec3[i]<<" ";
    // }


    // Memory implementation
    vector<int> vec2 = {1 , 2 , 3 , 4};
    cout<<"Size of vec2 : " <<vec2.size()<<'\n';//4
    cout<<"Capacity of vec2 : " <<vec2.capacity()<<'\n';//4

    cout<<"After Push Back "<<'\n';
    vec2.push_back(5);
    cout<<"Size of vec2 : " <<vec2.size()<<'\n';//5
    cout<<"Capacity of vec2 : " <<vec2.capacity()<<'\n';//8




    return 0;

}