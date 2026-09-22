#include<iostream>
#include<string>
using namespace std;

bool isAnagram(string str1 , string str2){

    if(str1.length()!= str2.length()){
        return false;
    }

    int freq[26] = {0};

    // Counting The Frequency
    for(int i = 0 ; i<str1.size(); i++){

        int idx = str1.at(i) - 'a';
        freq[idx]++;
    }

    // Now Comaprison
    for(int i = 0 ; i<str2.size(); i++){

        int idx = str2.at(i) - 'a';

        if(freq[idx] <= 0){
            return false;
        }
        else{
            freq[idx]--;
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