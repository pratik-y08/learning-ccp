#include<iostream>

using namespace std;

int main(){

    int array[3][5] = {
        {10,20,30,40,50},
        {60,70,80,90,100},
        {110,120,130,140,150},
    };

    for(int i=0; i<3; i++){

        cout<< "I am in row " << i+1 << " : ";

        for(int j=0; j<5; j++){
            cout<< array[i][j] << "  ";
        }
        cout<<"\n";
    }

    return 0;
}