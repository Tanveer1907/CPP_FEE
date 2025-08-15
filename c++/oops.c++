#include <iostream>
#include <string>
using namespace std;
class Teacher {
    public:
    //non-parameterized
    // Teacher(){
    //     cout<<"Constructor"<<endl;
    //     dept = "Computer Science";
    // }     
    //parameterized
    Teacher(string n, string d, string sub,double sal){
        name = n;
        dept = d;
        subject= sub;
        salary= sal;
    }
    //attributes
    public:
    string name;
    string dept;
    string subject;
    double salary;
    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
    //setter
    void setSalary(double s){
        salary = s;
    }
    //getter
    double getSalary(){
        return salary;
    }
    void getInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Salary: "<<salary;
    }
};

class Account{
    private:
    double balance;
    string password;//data hiding

    public:
    string accountId;
    string username;
};
int main(){
    // Teacher t1;
    // t1.name = "Tanveer";
    // t1.subject = "C++";
    // t1.setSalary(100000);
    // cout<<t1.getSalary()<<endl;
    // cout<<t1.dept;
    Teacher t1{"Tanveer", "Computer Science", "C++", 100000};
    t1.getInfo();
}