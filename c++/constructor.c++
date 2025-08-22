#include <iostream>
using namespace std;
class Shape{
    protected:
    int sides;
    public:
    Shape(int s){
        sides = s;
        cout<<"Shape constructor called"<<endl;
    }
    virtual void draw() = 0;
};
class Triangle :public Shape{
    public:
    Triangle(): Shape(3){
        cout<<"Triangle constructor called\n";
    }
    void draw() override{
        cout<<"Drawing a Triangle "<<sides<<" sides"<<endl;
    }
};
int main(){
    Triangle t;
    t.draw();
}