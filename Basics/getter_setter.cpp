#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Student_details{

    private:
        string name;
        int roll_num;
        vector<int> marks;

    public: 
        Student_details(string name_, int roll, vector<int> marks_){
            name = name_;
            roll_num = roll;
            marks = marks_;
        }

        //getter
        string getName(){
            return name;
        }

        //setter
        void setName(string name_){
            name = "Mr. " + name_;
        }

        int getRoll(){
            return roll_num;
        }

        void setRoll(int roll){
            roll_num = stoi("2500" + to_string(roll));
        }

        vector<int> getMarks(){
            return marks;
        }

        void setMarks(vector<int> marks_){
            for(int &mark : marks_){
                mark = mark + 5;
            }
            marks = marks_;
        }   

        void display(){

            cout<< "Student's name: " << name << endl;
            cout<< "Student's roll number: " << roll_num << endl;
            cout << "Student's marks: " << endl;
            for(int mark : marks){
                cout << mark << " " ;
            }
            cout<<endl;
        }

};

int main(){

    Student_details StudentOne("Pratik", 421, {40,45,46});
    StudentOne.setName("Pratik");
    StudentOne.setRoll(421);
    StudentOne.setMarks({40,45,46});

    StudentOne.display();

    return 0;
}