#include <iostream>
using namespace std;
int swap(int *a, int*b){
    int temp = *a;
    *a = *b;
    *b= temp;
}
auto findLargest = [](int *a,int*b, int*c) -> int* {
    if(*a > *b && *a > *c) return a;
    else if(*b > *a && *b > *c) return b;
    else return c;
};  

int main(){
    int a = 10,b= 20,c=30;
    int *p1= &a;
    int *p2 = &b;
    int *p3= &c;
    cout << "Original Values and Addresses:\n";
    cout << "a: " << *p1 << ", Address: " << p1 << endl;
    cout << "b: " << *p2 << ", Address: " << p2 << endl;
    cout << "c: " << *p3 << ", Address: " << p3 << endl;
    cout<<"Before swapping:"<<endl<<"a: "<<a<<" "<<"b: "<<b<<endl; 
    swap(p1,p2);
    cout<<"After swapping: "<<endl;
    cout<<"a : "<<a<<" ";
    cout<<"b : "<<b<<endl;
    int *largest = findLargest(p1,p2,p3);
    cout<<"The largest number is "<<*largest<<endl;
    *largest = 100;
    cout<<"a = "<< *p1<<endl;
    cout<<"b = "<< *p2<<endl;
    cout<<"c = "<< *p3;

}