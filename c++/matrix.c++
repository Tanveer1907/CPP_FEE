// //3x4 matrix
// #include <iostream>
// using namespace std;
// int main(){
//     int n, i,j;
//     cin>>n;
//     for(i =0;i<n-1;i++){
//         for(j = 0; j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //4x4 hollow square
// #include <iostream>
// using namespace std;
// int main(){
//     int n, i,j;
//     cin>>n;
//     for(i =0;i<n;i++){
//         for(j = 0; j<n;j++){
//             if(i == 0 || i == n-1 || j == 0 || j == n-1){
//             cout<<"* ";
//         }
//         else{cout<<" ";}
//     }
//         cout<<endl;
//     }
//     return 0;
// }
// //right angled triangle
// #include <iostream>
// using namespace std;
// int main(){
//     int n, i,j;
//     cin>>n;
//     for(i =1;i<=n;i++){
//         for(j = 1; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //inverted right angled triangle
// #include <iostream>
// using namespace std;
// int main(){
//     int n, i,j;
//     cin>>n;
//     for(i =n ;i >=1 ;i--){
//         for(j = 1; j<=i;j++){
//             cout<<"*";            
//         } 
//         cout<<endl;
//     }
//     return 0;
// }

//number triangle right angled

// #include <iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     for(i = 1;i<=n;i++){
//         for(j = 1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//inverted right angled number triangle
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     for(i = n;i>=1;i--){
//         for(j = 1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     for(i = 1;i<=n;i++){
//         for(j = 1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k = 1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//inverted pyramid
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i,j;
//     cin>>n;
//     for(i = 1;i<=n;i++){
//         for(j = 1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int k = 1;k<=2*i-1;k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

