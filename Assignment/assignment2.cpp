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
