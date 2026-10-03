#include<iostream>

using namespace std;

class Student_details{

    public:
        string name;
        int roll_num;

        //deligation constructor
        Student_details(string name): Student_details(name, 21){}

        //main constructor
        Student_details(string name_, int roll){
            name = name_;;
            roll_num = roll;
        }

        void display(){
            cout<< "Student's name: " << name << endl;
            cout << "Student's roll: " << roll_num << endl;
        }

};

int main(){
    Student_details studentOne("Pratik");
    studentOne.display();

    return 0;
}