#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;
public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }
    int area() {
        return length * width;
    }
    int perimeter() {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle r(5, 10);
    cout << "area: " << r.area() << endl;
    cout << "perimeter: " << r.perimeter() << endl;
    return 0;
}