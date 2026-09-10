/*A program to declare variables and store types of tea along with their prices and rating*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string type1 = "WhiteTea";
    string type2 = "BlackTea";
    string type3 = "LemonTea";

    float cost_type1 = 30.99;
    float cost_type2 = 20.99;
    float cost_type3 = 10.99;

    char rate_type1 = 'A';
    char rate_type2 = 'B';
    char rate_type3 = 'C';

    cout<<type1<<" is \"the best\" tea and is costs "<<cost_type1<<" per kg"<<endl;
    cout<<type2<<"is the \"second best\" tea and is costs "<<cost_type2<<" per kg"<<endl;
    cout<<type3<<" is the \"least bought\" tea and it costs" <<cost_type3<<" per kg"<<endl;

    return 0;
}