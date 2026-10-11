#include<iostream>
using namespace std;

class Car{

    public:
        string name;
        string color;
        int* mileage;

    
    Car(string name , string color){
        this->name = name;
        this->color = color;
        mileage = new int; //  giving space in Heap
        *mileage = 12;
    }

    // Copy Constructor--Deep Copy
    Car(Car &original){
        name = original.name;
        color = original.color;
        mileage = new int ; //  giving space in Heap
        *mileage = *original.mileage;

    }

    // De-allocate Heap  Memory
    ~Car(){
        cout<<"deleting Object..."<<'\n';
        if(mileage != NULL){
            delete mileage;
            mileage = NULL;
        }

    }
};


int main(){

    Car c1("BMW" , "Blue");

    cout<<c1.name<<'\n';
    cout<<c1.color<<'\n';
    cout<<*c1.mileage<<'\n';

    return 0;

}
