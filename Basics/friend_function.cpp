#include<iostream>

using namespace std;

class Student_detail{

    private:
        string name;
        int roll_num;

    public:
        Student_detail(string stu_name, int roll){
            name = stu_name;
            roll_num = roll;
        }
        
        //friend function
        friend bool seating_order(const Student_detail &student1, const Student_detail &student2);

        void display(){
            cout<< "Student's name: "<< name <<endl;
            cout<< "Student's roll number: " << roll_num << endl;
        }
};

bool seating_order(const Student_detail &student1, const Student_detail &student2){
    return student1.roll_num < student2.roll_num;
}

int main(){

    Student_detail studentOne("Pratik", 421);
    Student_detail studentTwo("Prince", 422);

    if(seating_order(studentOne, studentTwo)){
        cout<< "Student One sits on the first bench" << endl; 
    }else{
        cout<< "Student Two sits on the first bench" << endl;
    }

    return 0;
}