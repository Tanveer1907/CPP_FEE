// #include <iostream>
// using namespace std;
// namespace MyMath{
//     int add (int a, int b){
//         return a+b;
//     }
// }
// int main(){
//     int result = MyMath::add(4,5);
//     cout<<"The Result is "<< result;
// }

// namespace Outer{
//     int x = 10;
//     namespace Inner{
//         int x = 40;
//     }
// }


//easy1
// namespace Hello{
//     void greet(){std::cout << "Hi\n"; }
// }
// int main() {
// Hello::greet();
// return 0;
// }

//easy2
// #include <iostream>
// namespace Physics{
//     float gravity(){
//         return 9.8;
//     }
// }
// int main(){
//     float g = Physics::gravity();
//     std::cout<<g;
//     return 0;
// }

// medium 
#include <iostream>
namespace A {
int val() { return 2; }
}
namespace B {
int val() { return 5; }
}
int main() {
std::cout << A::val() + B::val() << std::endl;
return 0;
}
