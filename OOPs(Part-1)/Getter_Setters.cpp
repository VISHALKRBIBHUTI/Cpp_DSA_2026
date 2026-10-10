#include<iostream>
using namespace std;


class Students{

    private:
    string name;
    float cgpa;


    public:
    // setters
    void setName(string Stuname){
        name = Stuname;
    }

    // setters
    void setCgpa(float cgpaVal){
        cgpa = cgpaVal;
    }

    // getters
    string getName(){
        return name;
    }

    // getters
    float getCgpa(){
        return cgpa;
    }
};

int main(){

    Students s1;

    s1.setName("Vishal");
    s1.setCgpa(7.12);

    cout<<s1.getName()<<'\n';
    cout<<s1.getCgpa()<<'\n';


    return 0;
}