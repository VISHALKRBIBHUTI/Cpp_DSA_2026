#include<iostream>
using namespace std;


// Abstract Class
class Shape {

    public:
        virtual void draw() = 0; //pure virtual fnx , abstract fnx


};

class Circle : public Shape{
    public:
        void draw(){
            cout<<"Draw Circle..."<<'\n';
        }
    
};

class Sqaure : public Shape{
    public:
        void draw(){
            cout<<"Draw Sqaure..."<<'\n';
        }
    
};

int main(){

    Circle cr1;
    cr1.draw();

    Sqaure sq1;
    sq1.draw();


    return 0;
}