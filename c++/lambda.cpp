//lambda
//#include <iostream>
// using namespace std;
// int main(){
//     auto sayHello = [](){std :: cout <<"Hello!\n";};
//     sayHello();
// }
// #include <iostream>
// using namespace std;
// int main(){
//     int a = 5, b= 10;
//     auto func = [&](int a, int b){std::cout<<"Inside lambda:"<<endl<<"a = "<<++a<<endl<<"b = "<< ++b<<endl;};
//     func(a,b);
//     cout<<"Outside lambda: "<< endl<<"a = "<<a<<endl<<"b = "<< b<< endl;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     auto add = [](int a , int b){return a+b;};
//     std :: cout<< "The sum is "<<add(2,3)<< std::endl;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int a = 10, b = 20, c= 30;
//     auto new1 = [=](int &a, int&b, int&c ){
//         ++a;
//         ++b;
//         ++c;
//     };
//     new1(a,b,c);
//     std:: cout<<a<<" "<<b<<" "<<c;}

//lambda for squaring a number
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     auto square = [&](int &a){
//         return a*a;
//     };
//     int num = 6;
//     cout << "Square of " << num << " is " << square(num) << endl;
// }

// //easy 1
// #include <iostream>
// using namespace std;
// int main(){
//     auto greet = [](){
//         std :: cout<<"Welcome\n";
//     };
//     greet();
// }


// //medium 
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]= {4,7,10,13};
//     auto even = [](int x){return x%2==0;};
//     for(int i = 0;i<4;i++){
//         if(even(arr[i])){
//             std:: cout<<arr[i]<<" ";
//         }
//     }
// }

//hard
#include <iostream>
using namespace std;
int main(){
    int sum = 100;
    auto new_sum = [&](int &x){
        sum +=x;
    };
    
    int x;
    cout <<"Enter the integer: ";
    cin>>x;
    cout<<"Before lambda sum is: "<<sum<<endl;
    new_sum(x);
    cout<<"Updated sum after lambda is "<<sum<<endl;

}