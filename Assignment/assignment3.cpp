/*Write a program that takes the user's favorite tea as input using getline and also asks how
 many cups of tea they want using cin. Display the result in a fun message*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string fav_tea;
    cout<<"What tea is your favourite?"<<endl;
    getline(cin, fav_tea);
    int cups;
    cout<<"How many cups would you like to have?"<<endl;
    cin>>cups;
    cout<<"Great! your " << cups << " cups of "<< fav_tea << " Wwill be ready in about 5 minutes, please have patience.";
    return 0;
}