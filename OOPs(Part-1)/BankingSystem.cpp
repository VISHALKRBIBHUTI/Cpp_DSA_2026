#include<iostream>
using namespace std;

class BankAccount{

    private:
    int balance = 0;

    public:

    void credit(int amount){

        if(amount > 0){
            balance += amount;
        }
    }

    void debit(int amount){

        if(amount >0 && amount <= balance){
            balance -= amount;
        }
    }

    int getBalance(){
        return balance;
    }
};

int main(){

    BankAccount b1;

    // crediting amount
    b1.credit(100);

    // debiting amount
    b1.debit(50);

    // returning the balance;
    cout<<b1.getBalance()<<'\n';


    return 0;
}