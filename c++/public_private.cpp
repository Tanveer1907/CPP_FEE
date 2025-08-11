#include <iostream>
using namespace std;

class base {
public:
    void fun() {
        cout << "hello from base" << endl;
    }
};

class child1 : public base {
public:
    void fun() {
        cout << "hello from child1" << endl;
    }
};
class child2 : protected base {
    public:
  void fun(){
    cout<<"hello from child2"<<endl;
  }
};
class child3 : private base{
    void fun(){
        cout<<"Hello from child3"<<endl;
    }
};
int main() {
    child1 cb1;
    cb1.fun(); // calls child’s version
    return 0;
    child2 cb2;
    cb2.fun();
    return 0;
}