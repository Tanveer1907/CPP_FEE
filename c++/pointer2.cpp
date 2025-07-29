// # include <iostream>
// void print(int x){
//     std::cout << "Integer: " << x << std::endl;
// }
// void print(double x){
//     std::cout << "Double: " << x << std::endl;
// }
// int main(){
//     print(5);       
//     print(3.14);      
//     return 0;
    
// }
// #include <iostream>
// using namespace std;
// void change1(int x){
//     x =10;
// }
// void change2(int &x){
//     x = 10;
// }
// void change3(int *x){
//     *x =15;
// }
// int main(){
//     int num =5;
//     change1(num);
//     std::cout<<num<<std::endl;
//     change2(num);
//     std::cout << num << std::endl; // Now 10!
//     change3(&num);
//     std::cout << num << std::endl;
//     return 0;
// }

//show address and value
// #include <iostream>
// using namespace std;
// int main(){
//     int x = 50;
//     int *ptr = &x;
//     cout<<"Value: "<<x<<endl;
//     cout<<"Address: "<<ptr;
// }

//access float using pointer 
// #include <iostream>
// using namespace std;
// int main(){
//     float x = 12.5;
//     float *ptr = &x;
//     cout<<"Value: "<<x<<endl;
//     cout<<"Address: "<<ptr;

// }

//swap two numbers
// #include <iostream>
// using namespace std;
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int main(){
//     int a = 5, b = 8;
//     cout<<"Before: "<<"a = "<< a<<", "<<"b = "<<b<<endl;
//     swap(&a, &b);
//     cout<<"After: "<<"a = "<< a<<", "<<"b = "<<b<<endl;
// }

//array using pointer
#include <iostream>
using namespace std;
int main(){
    int arr [5]= {1,2,3,4,5};
    int *ptr = arr;
    for(int i = 0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
}