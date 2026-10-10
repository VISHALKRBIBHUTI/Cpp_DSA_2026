#include<iostream>
using namespace std;

class Car{
    string name;
    string color;

    public:
    // Constructor
    Car(string nameVal , string colorVal){
        cout<<"Constructor is Called Object being Created.../"<<'\n';
        name = nameVal;
        color = colorVal;
    }

    void start(){
        cout<<"Car Start...."<<'\n';
    }

    void stop(){
        cout<<"Car Stop..."<<'\n';
    }

    string getName(){
        return name;
    }
};


int main(){

    Car c1("maruti 800" , "white");
    cout<<"Car Name is : "<<c1.getName()<<'\n';
    return 0;
}