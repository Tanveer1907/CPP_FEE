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
#include <iostream>
using namespace std;
int main(){
    int sum = 100;
    auto Update_sum = [&](int x){
        sum += x;
    };
    int x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    cout<<"Sum is "<<sum<<endl;
    Update_sum(x);
    cout<<"Sum is "<<sum<<endl;
       
}
