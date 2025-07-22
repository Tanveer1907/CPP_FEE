#include <iostream>
using namespace std;
class employee_ID{
public:
    int employee;
    char name[100];
    double salary;
    int exp;
};
int main(){
    employee_ID emp;
    cout<<"Enter Employee ID: ";
    cin>>emp.employee;
    cout<<"Enter Employee name: ";
    cin>>emp.name;
    cout<<"Enter basic salary: ";
    cin>>emp.salary;
    cout<<"Enter years of experience: ";
    cin>>emp.exp;
    if(emp.exp<2){
        emp.salary = emp.salary + 0.05*emp.salary;
    }
    else if(emp.exp>=2 && emp.exp<=5){
        emp.salary= emp.salary+0.1*emp.salary;
    }
    else{
        emp.salary= emp.salary+ 0.15*emp.salary;
    }
    cout << "The total salary is "<< emp.salary;
}
