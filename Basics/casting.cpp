#include<iostream>

int main(){
    int num1 = 5;
    int num2 = 2;
    int result1 = num1/num2;  //returns 2
    float result2 = (float)num1/num2;  //returns 2.5
    std::cout<<result1<<std::endl;
    std::cout<<result2<<std::endl;

    int price = 99.99;
    std::cout<<price<<std::endl;  //will give 99 price is of int data type

    int a = 2.5;
    int b = 2;
    float sum = (float)a + b;   //will still give 4 as variable a is of int data type so it stores 2 not 2.5
    std::cout<<sum<<std::endl;

    
    float a1 = 2.5;
    float b1 = 2;
    float sum1 = a1 + b1;   
    std::cout<<sum1<<std::endl;


    return 0;
}