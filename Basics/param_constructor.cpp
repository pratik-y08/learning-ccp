#include<iostream>
#include<vector>

using namespace std;

class Student_details{
    public: 
        string name;
        int roll_number;
        vector<int> marks;

        //parameter constructor
        Student_details(string name_, int roll, vector<int> marks_){
            name = name_;
            roll_number = roll;
            marks = marks_;

            cout<< "Parameter Constructor has been called" << endl;
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

        Student_details studentOne("Pratik", 421, {49,51,55,35,59,48});

        studentOne.display();

        return 0;
}