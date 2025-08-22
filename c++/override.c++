#include <iostream>
using namespace std;
class A{
    public: 
    virtual void fun(){
        cout<<"The main function"<<endl;
    };
};
class B: public A{
    public:
    void fun() override{
        cout<<"Over riding this function";
    };
};
int main(){
    A a;
    B b;
    a.fun();
    b.fun();
}