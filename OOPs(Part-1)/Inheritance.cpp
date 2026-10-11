#include<iostream>
using namespace std;

class Animal{

    public:
        string color;

    void eat(){
        cout<<"Eats"<<'\n';
    }

    void breathe(){
        cout<<"breathe"<<'\n';
    }

};

class Fish : public Animal{

    public:
        int fins;
    
    void swim(){
        cout<<"fish swim"<<'\n';
    }
};


int main(){

    Fish f1 ;
    f1.swim();
    f1.eat();
    f1.breathe();
    f1.fins = 4;
    cout<<"fins : "<<f1.fins<<'\n';


    return 0;
}