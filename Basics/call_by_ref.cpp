#include<iostream>

using namespace std;

void final_price(int &price){
    price = price+10;               
    cout<< "The final price is: " << price << endl; 
}

int main(){

    int original_price = 10;
    final_price(original_price);   
    cout << "Original price is: " << original_price;  
    return 0;
}