#include<iostream>

using namespace std;

int main(){
    int array[5] = {10, 20, 30, 40, 50};

    cout<< "The numbers strored in the array are: \n";
    for(int i = 0; i<5 ; i++){

        cout<< array[i] << "\n";
    }

    return 0;
}