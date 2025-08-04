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