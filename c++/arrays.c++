//find largest and smallest element in array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10], n;
//     cout<<"enter number of elements: ";
//     cin>>n;
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i = 1;i<n;i++){
//         if(max<arr[i]){
//             max = arr[i];
//         }
//     }
//     int min = arr[0];
//     for(int i = 1
//     ;i<n;i++){
//         if(min>arr[i]){
//             min = arr[i];
//         }
//     }
//     cout<<"Largest element is "<< max<<endl;
//     cout<<"Smallest element is "<< min;
//     return 0;
// }

// find frequency of element 

// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10], n;
//     cout<<"enter number of elements: ";
//     cin>>n;
//     for(int i =0;i<n;i++){
//         cin>>arr[i];
//     }
//     int element;
//     cout<<"Enter the element: ";
//     cin>>element;
//     int count = 0;
//     for(int i =0;i<n;i++){
//         if(element == arr[i]){
//             count++;
//         }
//     }
//     cout<<"Frequency of "<<element<<" is "<< count;
   
// }

//sumof diagonals of a matrix
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter number of rows and columns: ";
//     cin>>n;
//     int arr[n][n];
//     for(int i =0;i<n;i++){
//         for(int j =0;j<n;j++){
//             cin>>arr[i][j];
//         }
//     }
//     int diagonal_sum = 0;
//     for(int i =0;i<n;i++){
//         for(int j = 0;j<n;j++){
//             if(i == j){
//                 diagonal_sum+=arr[i][j];
//             }
//         }
//     }
//     cout<<"the sum of diagonals is "<<diagonal_sum;
// }

//print duplicate element in array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[10];
//     int n;
//     cout<<"Enter number of elements: ";
//     cin>>n;
//     for(int i = 0;i<n;i++){
//             cin>>arr[i];
//     }
//     for(int i =0;i<n;i++){
//         if(arr[i]==arr[i]){
//             cout<<arr[i];
//         }
//     }
// }


#include<iostream>
using namespace std;
int main(){
    int a = 10;
    cout<< ++a + ++a<<endl;
    return 0;
}