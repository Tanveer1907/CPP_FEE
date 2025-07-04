#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Marks: ";
    cin>>n;
    if(n<=100 && n>=90){
        cout<<"A"<<endl;
    }
    else if(n<90 && n>=80){
        cout<<"B"<<endl;
    }
    else if(n<80 && n>=70){
        cout<<"C"<<endl;
    }
    else if(n<70){
        cout<<"D"<<endl;
    }
    return 0;
}