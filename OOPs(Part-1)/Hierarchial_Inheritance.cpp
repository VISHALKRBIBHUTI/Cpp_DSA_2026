#include<iostream>
using namespace std;

class Animal{

    public:
        void eat(){
            cout<<"Eat..."<<'\n';
        }

        void breathe(){
            cout<<"Breathe..."<<'\n';
        }
};


class Birds : public Animal{

    public:
        void fly(){
            cout<<"Fly..."<<'\n';
        }
};


class Mammal : public Animal{

    public:
        void walk(){
            cout<<"Walk.."<<'\n';
        }

};


int main(){

    Mammal m1;
    m1.eat();
    m1.breathe();
    m1.walk();



    return 0;
}