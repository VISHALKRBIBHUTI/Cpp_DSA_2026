#include<iostream>
using namespace std;

class Car{

    string name;
    string color;

    public:

    Car(){ //Non-Parametrized Constructor
        cout<<"Constructor is Called..."<<'\n';
    }

    Car(string name , string color){//Parametrized Constructor
        this->name = name; //in RHS name come from parameter of Constructor
        this->color = color;
    }

    string getName(){
        return name;
    }

    string getColor(){
        return color;
    }

};

int main(){

    Car c1; //call non-parametrized constructor... 
    Car c2("maruti 800" , "Black"); //call parameterized constructor...
    cout<<c2.getName()<<'\n';
    cout<<c2.getColor()<<'\n';
    return 0;
}