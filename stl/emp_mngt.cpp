#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<numeric>

using namespace std;

struct employee{
    int id;
    string name;
    double salary;
};

void display_details(const employee& emp){
    cout<< "ID: " << emp.id << " NAME: " << emp.name << " Salary: " << emp.salary << "lpa"<< endl;
}

int main(){
    vector<employee> employees{
        {101, "Pratik", 18},
        {102, "Pranjal", 15},
        {103, "Prince", 17},
        {104, "Anya", 14}
    };

    sort(employees.begin(), employees.end(), [](const employee& e1, const employee& e2){
        return e1.salary > e2.salary;
    });

    cout<< "Employees sorted by salary(highest to lowest): " << endl;

    for_each(employees.begin(), employees.end(), display_details);

    vector<employee> top_paid;

    copy_if(employees.begin(), employees.end(), back_inserter(top_paid), [](const employee& e){
        return e.salary >= 15;
    });

    cout<< "Employees with salary 15lpa or more: "<< endl;

    for_each(top_paid.begin(), top_paid.end(), display_details); 

    double total_salary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const employee& e){
        return sum + e.salary;
    });

    double avg_salary = total_salary / employees.size();

    cout<< "Average salary = " << avg_salary << "lpa" << endl;

    auto highest_paid = max_element(employees.begin(), employees.end(), [](const employee& e1, const employee& e2){
        return e1.salary < e2.salary;
    });

    cout << "Highest paid: " << highest_paid->name << endl;

    return 0;
}