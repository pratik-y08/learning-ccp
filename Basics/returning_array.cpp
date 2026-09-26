#include<iostream>
using namespace std;

//this function return a pointer with reference to the first value of the array in the heap memory

int* test_num(int size){
    int* numbers = new int[size];   
    for(int i=0; i<size; i++){
        numbers[i] = i+1;
    }
    return numbers;
}

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin>>size;

    int* output = test_num(size);
    for(int i=0;i<size; i++){
        cout<< output[i] << " "; 
    }

    return 0;
}