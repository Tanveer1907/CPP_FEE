#include <iostream>
using namespace std;
class demo
{
    public:
    static int counter;
    demo() { counter++; }
};
int demo::counter=0;
int main(){
    demo a,b;
    std::cout<<demo::counter<<std::endl;
    return 0;
}