#include<iostream>
using namespace std;

int buyAndSellStock(int *price , int size){

    int buyingPrice = price[0]; // buy
    int maxProfit = 0;

    for(int i = 1 ; i<size ; i++){
        int sellingPrice = price[i];

        if(buyingPrice < sellingPrice){
            int profit = sellingPrice - buyingPrice;
            maxProfit = max(profit , maxProfit);
        }
        else{
            buyingPrice = sellingPrice;
        }
    }

    return maxProfit;


}

int main(){

    int price[] = {7 , 1 , 5 , 3 , 6 , 4};
    int size = sizeof(price)/sizeof(int);

    cout<<buyAndSellStock(price , size);


    return 0;


}