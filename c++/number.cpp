#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>> n;
    cout<<"Number Analysis for "<<n<<":"<<endl;
    if(n%2==0){
        cout<<"Even: Yes"<<endl;
    }
    else{
        cout<<"Even: No"<<endl;
    }
    if(n>0){
        cout<<"Positive: Yes"<<endl;
    }
    else if(n<=0){
        cout<<"Positive: No"<<endl;
    }
    if(n%3==0){
        cout<<"Divisble by 3: Yes"<<endl;
    }
    else{}
    
}