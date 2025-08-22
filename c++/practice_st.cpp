// #include <iostream>
// using namespace std;
// //swap 2 numbers
// int swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     // int x = 50;
//     // int *p = &x;
//     // cout<<x<<endl;
//     // cout<<p;

//     //access float using pointer
//     // float a = 12.5;
//     // float *ptr = &a;
//     // cout<<*ptr;

//     int x = 5, y = 8;
//     cout<<"Before: x = "<<x<<", y = "<< y<<endl;
//     swap(&x, &y);
//     cout<<"After: x = "<<x<<", y = "<< y<<endl;
// }


//array using pointer
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int *p = arr;
//     for(int i = 0;i<5;i++){
//         cout<<*(p+i)<<" ";
//     }
// }

//unique and shared pointers
// #include <iostream>
// #include <memory>
// int main() {
// std::shared_ptr<int> p1(new int(99));
// std::shared_ptr<int> p2 = p1; // Both share the memory!
// std::cout << "p1: " << *p1 << ", p2: " << *p2 << std::endl;
// std::cout << "Count: " << p1.use_count() << std::endl;
// return 0;
// }

// #include <memory>
// int main() {
// std::unique_ptr<int> x(new int(12));
// return 0;
// }

//lambda
// #include <iostream>
// using namespace std;
// int main(){
//     int sum = 100;
//     auto Update_sum = [&](int x){
//         sum += x;
//     };
//     int x;
//     cout<<"Enter a number: "<<endl;
//     cin>>x;
//     cout<<"Sum is "<<sum<<endl;
//     Update_sum(x);
//     cout<<"Sum is "<<sum<<endl;
       
// }


//struct and class
#include <iostream>
using namespace std;
// struct Book{
//     int pages;
//     double price;
// };
// int main(){
//     Book b;
//     b.pages = 100;
//     b.price = 99.9;
//     cout<<b.pages<<" "<<b.price;
// }

// class Circle{
//     public:
//     double radius;
// };
// int main(){
//     Circle* c1 = new Circle;
//     c1->radius = 4.2;
//     cout<<c1->radius;
//     delete c1;
// }

// struct Date {
// int day;
// int month;
// int year;
// };
// int main(){
//     Date d1;
//     d1.day = 15;
//     d1.month = 8;
//     d1.year = 1947;
    
//     Date* d2 = new Date;
//     d2->day = 26;
//     d2->month = 1;
//     d2->year = 1950;

//     cout<<d1.day<<"-"<<d1.month<<"-"<<d1.year<<endl;
//     cout<<d2->day<<"-"<<d2->month<<"-"<<d2->year<<endl;
// }


// class Box {
// int secret;
// public:
// int visible;

// int getInfo(int s){
//     secret = s;
//     return s;
// }
// };
// int main() {
// Box b;
// b.visible = 10;
// int s = 42;
// b.getInfo(s);
// std::cout << b.visible << std::endl;
// std::cout << b.getInfo(s) << std::endl; // Print secret here (after fixing)
// return 0;
// }


// class Number {
// public:
// int value;
// };
// int main() {
// Number a;
// a.value = 20;
// Number b = a;
// b.value = 50;
// std::cout << a.value << " " << b.value << std::endl;
// return 0;
// }