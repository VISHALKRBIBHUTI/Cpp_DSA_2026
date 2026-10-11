#include<iostream>
#include<string>
using namespace std;

class Users{

    int id;
    string password;

    public:
    string userName;

    Users(int id){
        this->id = id;
    }

    void setPassword(string password){
       this->password = password;
    }

    string getPassword(){
        return password;
    }
};




int main(){

    Users user1(101);
    user1.userName = "vishal";
    user1.setPassword("123abcd@vi");

    cout<<user1.userName<<'\n';
    cout<<user1.getPassword()<<'\n';

    return 0;

}