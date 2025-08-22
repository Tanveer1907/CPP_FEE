#include <iostream>
using namespace std;
class Student{
    public:
    static int totalstudents;
    Student(){
        totalstudents++;
    }
};