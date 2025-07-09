#include <iostream>
using namespace std;
int main(){
    int arr[10][10];
    int rows,cols;
    cout << "Enter no. of rows: ";
    cin >> rows;
    cout << "Enter no. of columns: ";
    cin >> cols;
    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cin>>arr[i][j];
        }
    }
    for(int i =0;i<rows;i++){
        for(int j = 0;j<cols;j++){
            cout<<arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}