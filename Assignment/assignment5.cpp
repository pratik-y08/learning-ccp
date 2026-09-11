/*Create a program where the user inputs the number of tea bags they have. If the number is less than 20, 
give them 10 extra bags using the assignment operator. Display the updated total.*/

#include<iostream>
 using namespace std;

 int main(){
    int num_of_bags;
    cout<<"How many bags you have?"<<endl;
    cin>>num_of_bags;

    if(num_of_bags<20){
        num_of_bags += 10;
    }
    cout<<"The total numbers of bags are " << num_of_bags ;

    return 0;
 }