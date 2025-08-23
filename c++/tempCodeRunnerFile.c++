#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n, rem, digits= 0, sum= 0;
    cin>>n;
    int temp = n;
    while(temp!=0){
        temp=temp/10;
        digits++;
    }
    temp = n;
    while(temp!=0){
        int digit = temp%10;
        sum += pow(digit, digits);
        temp/=10;
    }
    if(sum == n){
        cout<<"armstrong";
    }
    else{
        cout<<"No";
    }
}