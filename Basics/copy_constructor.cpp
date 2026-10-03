#include<iostream>
#include<vector>

using namespace std;

class Student_details{
    public: 
        string* name;
        int roll_number;
        vector<int> marks;

        //parameter constructor
        Student_details(string name_, int roll, vector<int> marks_){
            name = new string(name_);
            roll_number = roll;
            marks = marks_;

            cout<< "Parameter Constructor has been called" << endl;
        }

        //"The copy constructor receives a reference to the original object, generally reads its members, and uses them to initialize the new copy."

        /*we use the const keyword because the very purpose of copy constructor is to read form the original object and use it
         to initialize a copy object, so const ensure that no modifications like(other.roll_number = 48 is made) inside the copy constructor as 
         it would change the original object itself */
        
        Student_details(const Student_details& other){
            name = new string(*other.name);
            roll_number = other.roll_number;
            marks = other.marks;
            cout << "Copy constructor has been called" << endl;
        }

        ~Student_details(){
            delete name;
            cout<< "Destructor has been called"<<endl;
        }

        void display(){
            cout<< "Student's name: " << *name <<endl;
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

        Student_details copy_one = studentOne;
        copy_one.display();

        return 0;
}