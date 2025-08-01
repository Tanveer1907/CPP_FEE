#include <iostream>
using namespace std;
int calculate(int x, int y){
    return x+y;
}
float calculate(float x, float y){
    return x*y;
}
float calculate(int x, int y, int z){
    return float((x+y+z))/3;
}
int main(){
    cout << calculate(2,3);
    cout<<endl;
    cout << calculate(4.2f,5.5f);
    cout<<endl;
    cout << calculate(2,3,6);
    
}