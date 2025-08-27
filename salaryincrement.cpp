#include <iostream>
using namespace std;

void ref(float &profit) {
    profit = profit + (profit *0.20);
}
int main() {
    int id, projects, publications, new_proj_in_pipeline;
    float profit, salary;

    cout << "Enter Employee ID: ";
    cin >> id;
    cout << "Enter projects done: ";
    cin >> projects;
    cout << "Enter publications done: ";
    cin >> publications;
    cout << "Enter profit (Rs): ";
    cin >> profit;
    cout << "Enter salary (Rs): ";
    cin >> salary;
    cout << "Enter new projects in pipeline: ";
    cin >> new_proj_in_pipeline;

    if (projects > 0 && publications > 0 && profit >= 100000 && new_proj_in_pipeline > 0) {
        
        cout<<"ID: "<<id<<endl;
        ref(salary);
        cout<<"After increment salary: "<<salary<<endl;
    }
    else{
        cout<<"Salary will not increase for: ID"<<id<<endl;
    }
    return 0;
}
