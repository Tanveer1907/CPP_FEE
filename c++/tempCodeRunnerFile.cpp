#include <iostream>
using namespace std;
int sumDigits(int n){
    if (n<10){
        return n;
    }
    else{
        return sumDigits(n/10)+ n%10;
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int result = sumDigits(n);
    cout<<"The sum of digits is "<<result;   
}