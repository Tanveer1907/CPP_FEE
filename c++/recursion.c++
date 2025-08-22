#include <iostream>
using namespace std;
// void fun(int n){
//     if(n ==0 ){
//         return ;
//     }
//     cout<<n<<" ";
//     fun(n-1);
// }
// int main(){
//     fun(5);
// }

int fib(int n){
    if(n<=1){
        return n;
    }   
    else{
        return fib(n-1) +fib(n-2);
    }
    
}
int main(){
    int n;
    cin>>n;
    fib(n);
    for(int i = 0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    
}