#include<iostream>

using namespace std;

class Student_details{
    private:
        string name;
        int roll_num;
    
    public:
        Student_details(){
            name = "Pratik";
            roll_num = 21;
        }

        friend class F;
};

class F{

    public:
        void display(const Student_details& stu){
            cout<< "Student's name: " << stu.name << endl;
            cout << "Stdudent's roll number: " << stu.roll_num << endl;
        }
                
};

int main(){

    Student_details studentOne;
    F fri;
    fri.display(studentOne);

    return 0;
}