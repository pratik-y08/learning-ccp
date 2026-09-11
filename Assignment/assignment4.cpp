/*Write a program that calculates the price of tea packs. A user enters the number of tea packs they want, and the price per pack.
 Apply a 10% tax to the total price and display the final cost*/

#include<iostream>

using namespace std;

int main(){
    int number_of_teapacks;
    int price_perpack,total_price;
    float final_price;

    cout<<"Enter the number of tea packs you want: ";
    cin>>number_of_teapacks;
    cout<<"Enter the price of each pack: ";
    cin>>price_perpack;

    total_price = number_of_teapacks*price_perpack;
    final_price = total_price + 0.1*total_price;
    cout<<"The final price of " << number_of_teapacks << " tea packs is " << final_price;

    return 0;
}