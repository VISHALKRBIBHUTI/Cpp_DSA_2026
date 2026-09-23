#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // char ch[5];
    // cin>>ch;
    // cout<<ch<<'\n';

    // char work[5] = "code";
    // cout<<work<<'\n';
    // cout<<sizeof(work)<<'\n';
    // cout<<strlen(work)<<'\n';

    // char str1[6];
    // char str2[] = "hello";
    // cout<<strcpy(str1 , str2)<<"\n";
    // cout<<str1<<"\n";
    // cout<<str2<<"\n";

    char str1[] = "hello";
    char str2[] = "z";
    cout<<strcmp(str1 , str2)<<'\n' ; // expecting negative

    
    return 0;
}