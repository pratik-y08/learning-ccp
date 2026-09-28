#include<iostream>
#include<vector>

using namespace std;

class Student{
    public: 

        //attributes of the class
        string name;
        int roll_number;
        vector<int> marks;

        //member function of the class
        void display_details(){
            cout<< "Student's name: " << name << endl;
            cout<< "Student's roll number: " << roll_number << endl;
            cout<< "Student's marks: ";
            for(int mark : marks){
                cout << mark << " ";
            }
            cout<<endl;
        }
};


int main(){
    Student studentOne;

    studentOne.name = "Pratik";
    studentOne.roll_number = 421;
    studentOne.marks = {40,46,45,43,26,35};

    studentOne.display_details();

    Student studentTwo;

    studentTwo.name = "Pranjal";
    studentTwo.roll_number = 1090;
    studentTwo.marks = {49,35,36,48,42,45};

    studentTwo.display_details();

    return 0;
}