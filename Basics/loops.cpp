/*for(initialisation; condition; increament/decreament)
while(condition){
    body
    increament/decreament
}
do while(checks condiotion after running the body)*/


#include<iostream>

using namespace std;

int main(){
    int n;
    cout<< "Enter a number: ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        cout<< i << "\n";
    }

    return 0;
}
