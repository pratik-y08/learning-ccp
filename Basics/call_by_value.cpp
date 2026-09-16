#include<iostream>

using namespace std;

void final_price(int price){
    price = price+10;               //since a copy is passed,any changes to the copy made inside the function does not effect the original value.
    cout<< "The final price is: " << price << endl; 
}

int main(){

    int original_price = 10;
    final_price(original_price);   // a copy of the original price is passed to the function or the function's parameter(price)
    cout << "Original price is: " << original_price;  
    return 0;
}