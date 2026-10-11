#include<iostream>
using namespace std;

class Teacher{

    public:
        string subject;
        float salary;
};

class Students{

    public:
        int roll_no;
        float cgpa;

};

class TA : public Teacher , public Students{

    public:
        string name;

};


int main(){

    TA ta1;

    ta1.name = "Vishal";
    ta1.subject = "c++";
    ta1.cgpa = 7.12;


    cout<<ta1.name<<'\n';
    cout<<ta1.subject<<'\n';
    cout<<ta1.cgpa<<'\n';


    return 0;
}