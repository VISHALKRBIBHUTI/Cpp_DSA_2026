#include<iostream>
using namespace std;

class Car{

    public:
        string name;
        string color;
        int *mileage;

    Car(string name , string color){
        this->name = name;
        this->color = color;
        mileage = new int; //Dynamic Memory Allocation
        *mileage = 12;
    }

    // Copy Constructor
    Car(Car &original){
        name = original.name;
        color = original.color;
        mileage = original.mileage;
    }
};

int main(){

    Car c1("BMW" , "Black");

    Car c2(c1);
    cout<<"c2 Car name : "<<c2.name<<'\n';
    cout<<"c2 Car color : "<<c2.color<<'\n';
    cout<<"c2 Car mileage : "<<*c2.mileage<<'\n';

    cout<<"-------------"<<'\n';

    *c2.mileage = 10;
    cout<<"c1 mileage is : "<<*c1.mileage<<'\n';



    return 0;
}