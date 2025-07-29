#include <iostream>
#include <memory>
using namespace std;
int main(){
    // int arr[5]= {1,10,20,30,20};
    // int *ptr = arr;
    // for(int i = 0;i<5;i++){
    //     cout<<*(ptr+i)<<" ";
    // }
    // int a= 5, b = 10;
    // int *p1 = &a;
    // int *p2 = &b;
    // int *p3 = &a;
    // cout<< p1<<" "<< p2<<" "<< p3<< endl;

    std::unique_ptr<int> p4(new int(42));
    std::cout << "Number: " << *p4 << std::endl;// No delete needed—done automatically!

    std::shared_ptr<int> p1(new int(99));
std::shared_ptr<int> p2 = p1; // Both share the memory!
std::cout << "p1: " << *p1 << ", p2: " << *p2 << std::endl;
std::cout << "Count: " << p1.use_count() << std::endl;
    return 0;
}