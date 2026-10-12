#include<iostream>
using namespace std;


class A {

    string secret = "Secret Data";

    friend class B;
    friend void revealSecret(A &obj);
};

class B { // becomes a friend class of A

    public:
        void show(A &obj){
            cout<<obj.secret<<'\n';
        }
};

void revealSecret(A &obj){
    cout<<obj.secret<<'\n';
}

int main(){

    A a1;
    B b1;

    b1.show(a1);

    revealSecret(a1);

    return 0;
}