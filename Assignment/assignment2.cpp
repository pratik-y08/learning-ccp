/*Create a program where the user inputs a base price for tea. Use type casting to increase the price by 10% 
and display the rounded new price using explicit casting*/

#include<iostream>

using namespace std;

int main(){
    float base_price;
    cout<<"Enter the base price of the tea: "<<endl;
    cin>>base_price;

    float increased_price;
    increased_price = base_price + (10.0f/100.0f)*base_price;

    int selling_price = increased_price;
    cout<<"The final price of the tea is "<<selling_price<<endl;
}
