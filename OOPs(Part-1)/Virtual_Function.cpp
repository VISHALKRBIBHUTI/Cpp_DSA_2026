#include<iostream>
using namespace std;

class Parent{

    public:

        void show(){
            cout<<"Parent Class Show..."<<'\n';
        }

        virtual void hello(){
            cout<<"hello parent..."<<'\n';
        }
};


class Child : public Parent{

    public:

        void show(){
            cout<<"Child Show..."<<'\n';
        }

        void hello(){
            cout<<"Child hello..."<<'\n';
        }
};


int main(){

    Child c1;

    Parent *p1;

    p1 = &c1; // Run time binding

    p1->hello(); //Virtual Function



    return 0;
}