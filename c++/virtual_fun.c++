#include <iostream>
using namespace std;
class Animal {
public:
    virtual void sound()= 0;
    void eat(){
        cout<<"I can eat"<<endl;
    }
};
class Dog : public Animal {
    public: 
    void sound() override{
        cout<<"Bark Bark"<<endl;
    }
};
int main(){
    //Animal a not allowed bcz it is abstract class
    Dog d;
    d.sound();
    d.eat();

}