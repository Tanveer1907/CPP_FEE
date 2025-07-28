#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    cout<<"Number Analysis for "<<n<<":"<<endl;
    cout<<"Even: "<<(n%2==0? "Yes":"No")<<endl;
    cout<<"Positive: "<<(n>0? "Yes":"No")<<endl;
    cout<<"Divisible by 3: "<<(n%3==0? "Yes":"No")<<endl;
    cout<<"Divisible by 5: "<<(n%5==0? "Yes":"No")<<endl;
    cout<<"Divisible by both 3 & 5: "<<(n%3==0 && n%5==0? "Yes":"No")<<endl;
    cout<<"Single Digit: "<<(n>=0 && n<10? "Yes":"No")<<endl;
    return 0;
    
}