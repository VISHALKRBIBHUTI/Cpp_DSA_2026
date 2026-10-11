#include<iostream>
using namespace std;


class Animals{

    public:

    void eat(){
        cout<<"eat..."<<'\n';
    }


    void breathe(){
        cout<<"breathe"<<'\n';
    }
};

class Mammal : public Animals{
    public:
        string bloodType;
        
        Mammal(){
            bloodType = "warm";
        }

};

class Dog : public Mammal{

    public:
        void tailWag(){
            cout<<"Dog Wags its Tail"<<'\n';
        }
};

int main(){

    Dog d1;

    d1.eat();
    d1.breathe();
    d1.tailWag();

    cout<<d1.bloodType<<'\n';


    return 0;
}