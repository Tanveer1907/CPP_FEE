#include <iostream>
using namespace std;
int main(){
    // int arr[5]= {1,10,20,30,20};
    // int *ptr = arr;
    // for(int i = 0;i<5;i++){
    //     cout<<*(ptr+i)<<" ";
    // }
    int a= 5, b;
    int *p1 = &a;
    int *p2 = &a;
    int *p3 = &a;
    cout<< p1<<" "<< p2<<" "<< p3;
    return 0;
}