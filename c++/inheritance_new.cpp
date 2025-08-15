#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() {
        cout << "This is class A" << endl;
    }
};

// Class B inherits from A (single inheritance)
class B : public A {
public:
    void displayB() {
        cout << "This is class B" << endl;
    }
};

// Another base class
class C {
public:
    void displayC() {
        cout << "This is class C" << endl;
    }
};

// Class D inherits from both B and C (multiple inheritance)
class D : public B, public C {
public:
    void displayD() {
        cout << "This is class D" << endl;
    }
};

int main() {
    D obj;
    obj.displayA(); // from A
    obj.displayB(); // from B
    obj.displayC(); // from C
    obj.displayD(); // from D
    return 0;
}  