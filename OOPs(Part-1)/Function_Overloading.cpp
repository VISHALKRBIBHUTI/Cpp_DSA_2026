#include<iostream>
using namespace std;

class Print{

    public:

        void show(int x){
            cout<<"int is : "<<x<<'\n';
        }

        void show(string str){
            cout<<"string is : "<<str<<'\n';
        }
};

int main(){

    Print p1 ;
    p1.show(24);
    p1.show("hello");
}