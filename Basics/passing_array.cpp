#include<iostream>

using namespace std;

//passing array to a function
int total_earning(int array[], int size){
    int total = 0;
    for(int i=0;i<size;i++){
        total += array[i];
    }
    return total;
}

int main(){

    int earnings[7] = {1000, 2000, 3000, 4000, 5000, 6000, 7000};
    int total = total_earning(earnings, 7);
    cout<< "Total earning of the  week is " << total << " Rs.";

    return 0;
}