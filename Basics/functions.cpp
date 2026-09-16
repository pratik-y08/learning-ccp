/* 
    return type function_name(parameters){
        function body
    }
*/

#include<iostream>
#include<string>

using namespace std; 

//fucntion declaration
void user_age(int age);  
void greet(string  name = "User");     //if the user doesn't pass an argument while calling the function, "user" will be used as default parameter

int main(){
    int age;
    cout<< "Enter your age: ";
    cin>>age;
    cin.ignore();
    user_age(age);

    string name;
    cout<< "Enter your name: ";
    getline(cin, name);
    greet(name);

    return 0;
}


//fucntion defination
void user_age(int age){
    cout<< "Your age is " << age <<endl;
}

void greet(string name){   
    cout<< "Hello "<< name << endl;
}