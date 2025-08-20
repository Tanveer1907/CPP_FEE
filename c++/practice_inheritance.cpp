#include <iostream>
using namespace std;
class Test{
    public:
    int x = 10;

    private:
    int y = 15;
};
int main(){
    Test t;
    t.x;
    // t.y;
    cout<<t.x<<endl;
    // cout<<t.y<<endl;

}