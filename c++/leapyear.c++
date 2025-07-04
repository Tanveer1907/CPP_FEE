#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the year";
    cin>>n;
    if(n%4==0 && n%100!=0){
        cout<<"leap year"<<endl;
    }
    else{
        cout<<"Not a leap year"<<endl;
    }
    return 0;
}