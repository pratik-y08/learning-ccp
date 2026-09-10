#include<iostream>
#include<string>
using namespace std;

int main(){
    string username;
    cout<<"What is your name?\n";
    getline(cin, username);
    int age;
    cout << username<<", what is your age?\n";
    cin>>age;
    return 0;
}