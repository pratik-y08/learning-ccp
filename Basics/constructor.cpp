#include<iostream>
#include<vector>

using namespace std;

class Student_details{
    public: 
        string name;
        int roll_number;
        vector<int> marks;

        Student_details(){
            name = "Default_Name";
            roll_number = 000;
            marks = {00,00,00,00,00,00};

            cout<< "Constructor has been called" << endl;
        }

        void display(){
            cout<< "Student's name: " << name <<endl;
            cout<< "Student's roll number: " << roll_number <<endl;
            cout<< "Student's marks: ";
            for(int mark : marks){
                cout<< mark << " ";
            }
            cout << endl;

        }

    };

    int main(){

        Student_details studentOne;
        studentOne.display();

        return 0;
}