#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // 1.
    // char str1[6] = "hi";
    // cout<<str1<<'\n';

    // 1. strcpy(destination , source)
    char str2[50];
    char str3[100] = "hello World";
    // strcpy(str2 , "Vishal Kumar");
    strcpy(str2 , str3);
    cout<<str2<<'\n';


    //  int num =4;
    // int num =5;-->error: redeclaration of 'int num'
    // cout<<num<<'\n';


    // 2.strcat(str1 , str2)
    char str4[40] = "abc";
    char str5[40] = "xyz";
    strcat(str4 , str5);
    cout<<str4<<'\n';
    cout<<str5<<'\n';

    cout<<'\n';

    // 3.strcmp(str1 , str2)
    //3.1  0(str6 == str7)
    char str6[50] = "abc";
    char str7[50] = "abc";
    cout<<strcmp(str6 , str7)<<'\n';

    cout<<'\n';

    //3.2 -ve(str8 < str9)
    char str8[40] = "abc";
    char str9[40] = "xyz";
    cout<<strcmp(str8 , str9)<<'\n';

    cout<<'\n';

    //3.3 +ve(str10 > str11)
    char str10[40] = "xyz";
    char str11[30] = "abc";
    cout<<strcmp(str10 , str11)<<'\n'; 


    



    return 0;

   
}