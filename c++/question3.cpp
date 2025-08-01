#include <iostream>
using namespace std;
void doubleValue(int &x) {   //call by reference 
x =x * 2;
}
void doublevalue(int num2){  //call by value 
   num2= num2 * 2;
}
int main() {
int num = 11;
int num2=2;
doubleValue(num);
doublevalue(num2);
cout << num << endl;
cout<<num2;
return 0;
}