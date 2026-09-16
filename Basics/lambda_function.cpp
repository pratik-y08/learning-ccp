#include<iostream>

using namespace std;

int main(){

    auto final_price = [] (int price) {
        price+=10;
        cout << "The final price is: " << price;
    };

    final_price(10);

    return 0;
}