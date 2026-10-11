#include<iostream>
using namespace std;

class Car{

    public:
        string name;
        string color;
        int* mileage;

    // Parameterized Constructor
    Car(string name , string color){
        this->name = name;
        this->color = color;
        mileage = new int; // giving space in Heap
        *mileage = 12;
    }

    // Copy Constructor --Deep Copy
    Car(Car &original){
        name = original.name;
        color = original.color;
        mileage = new int; // space giving in heap
        *mileage = *original.mileage;
    }
    
    
};


int main(){

    Car c1("BMW" , "Black");

    Car c2(c1);
    cout<<"Car C2 name is : "<<c2.name<<'\n';
    cout<<"Car C2 Color is : "<<c2.color<<'\n';
    cout<<"Car C2 mileage is : "<<(*c2.mileage)<<'\n';


    cout<<"-----------------------------"<<'\n';
    *c2.mileage = 20;
    cout<<"Car C2 new mileage is : "<<(*c2.mileage)<<'\n';//20
    cout<<"Car C1 mileage is : "<<(*c1.mileage)<<'\n';//12



    return 0;
}