/*A tea subscription service offers a discount if the user buys more than 12 cups or if they are a member for more than a year. 
Write a program that checks if the user qualifies for a discount based on their input.*/

#include<iostream>

using namespace std;

int main(){
    int cups;
    bool member_year;
    cout<<"Enter the number of cups you want: ";
    cin>>cups;
    cout<<"Are you a member for more than a year(1 for yes/0 for no): "<<endl;
    cin>>member_year;

    if(cups>12 || member_year){
        cout<< "Yo are eligible for a discount! ";
    }
    else{
        cout<< "You are not eligible for a discount :(";
    }
    return 0;
} 