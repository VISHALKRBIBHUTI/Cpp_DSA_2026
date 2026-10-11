#include<iostream>
using namespace std;

class Car{

    public:
        string name;
        string color;

    Car(string name , string color){
        this->name = name;
        this->color = color;
    }


    // Creating own Copy Constructor
    Car(Car &original){
        cout<<"Copying to new....."<<'\n';
        name = original.name;
        color = original.color;
    }

};

int main(){

    Car c1("Maruti 800" , "Blue");

    Car c2(c1); //custom copy constructor
    cout<<c2.name<<'\n';
    cout<<c2.color<<'\n';

    cout<<"-----------------------------------"<<'\n';

    Car c3("BMW" , "Black");
    Car c4(c3);//custom copy constructor
    cout<<c4.name<<'\n';
    cout<<c4.color<<'\n';

    return 0;
}