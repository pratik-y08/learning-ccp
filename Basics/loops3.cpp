#include<iostream>
#include<string>

using namespace std;

int main(){

    string choice;

    do{
        cout<< "Do you want more cups of tea(Yes/no)?: ";
        getline(cin,choice);
    }while(choice != "no");
    
    cout<< "No more teas will be served!";
    return 0;
}