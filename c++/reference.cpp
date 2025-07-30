// #include <iostream>
// using namespace std;
// void fun(int x) { x += 5; }
// int main() {
// int a = 10;
// fun(a);
// std::cout << a << std::endl;
// return 0;
// }
// function working on a copy and not the original variable , tabhi value stays 10 only


//swap using call by reference
// #include <iostream>
// using namespace std;
// void swapNums(int &a, int &b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main() {
// int x = 3, y = 8;
// swapNums(x, y);
// std::cout << x << " " << y << std::endl;
// return 0;
// }

//Fix the function so it doubles an integer using call by pointer, and then use it in main.
// #include <iostream>
// using namespace std;
// void doubleValue(int *x) {
// *x = *x * 2;
// }
// int main() {
// int num = 11;
// doubleValue(&num);
// std::cout << num << std::endl;
// return 0;
// }

//Write a function that returns a reference to the largest element in an integer array. Use it to change the largest value in the array to 0, and print the array before and after.
#include <iostream>
using namespace std;
int& largest(int arr[], int size) {
    int max = arr[0];
    for(int i = 0;i<5;i++){
        if(max <arr[i]){
            max == arr[i];
        }
    }
}
int main() {
int data[5] = {4, 1, 7, 3, 2};
std::cout << "Before: ";
for(int i=0;i<5;i++) std::cout << data[i] << " ";
std::cout << std::endl;
largest(data, 5) = 0;
std::cout << "After: ";
for(int i=0;i<5;i++) std::cout << data[i] << " ";
std::cout << std::endl;
return 0;
}