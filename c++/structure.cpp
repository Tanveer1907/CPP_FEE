// #include <iostream>
// using namespace std;
// struct Point{
//     int x;
//     int y;
// };
// int main(){
//     Point p;
//     p.x = 3;
//     p.y = 5;
//     cout<<p.x<<", "<<p.y<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Rectangle{
//     public:
//     int width;
//     int height;
// };
// int main(){
//     Rectangle box;
//     box.width = 10;
//     box.height = 5;
//     cout<<box.width*box.height<<endl;
// }

#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

int main() {
    // 1. Create a Date object on the stack and set to 15th August 1947
    Date independenceDay;
    independenceDay.day = 15;
    independenceDay.month = 8;
    independenceDay.year = 1947;

    cout << independenceDay.day << "-" << independenceDay.month << "-" << independenceDay.year << endl;

    // 2. Create a Date object on the heap and set to 26th January 1950
    Date* republicDay = new Date;
    republicDay->day = 26;
    republicDay->month = 1;
    republicDay->year = 1950;

    cout << republicDay->day << "-" 
         << republicDay->month << "-" 
         << republicDay->year << endl;

    // 3. Free the heap memory
    delete republicDay;

    return 0;
}
