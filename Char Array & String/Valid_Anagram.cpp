#include<iostream>
#include<string>
using namespace std;


bool isAnagram(string str1 , string str2){


    if(str1.length() != str2.length()){
        return false;
    }

    int freq1[26] = {0};
    int freq2[26] = {0};

    for(int i = 0 ; i<str1.size(); i++){
        
        int idx = str1.at(i) - 'a';
        freq1[idx]++;
    }

     for(int i = 0 ; i<str2.size(); i++){
        
        int idx = str2.at(i) - 'a';
        freq2[idx]++;
    }

    // Do Comparison of value store at index
    for(int i = 0 ; i<26; i++){

        if(freq1[i] != freq2[i]){
            return false;
        }
    }

    return true;
}

int main(){

    string str1 = "anagram";
    string str2 = "nagaram";
    
    cout<<boolalpha<<'\n';
    cout<<"Are the strings anagrams: : "<<isAnagram(str1 , str2)<<'\n';
}