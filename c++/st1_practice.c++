// #include <iostream>
// using namespace std;
// class Student{
//     private: 
//     string name;
//     int age;

//     public:
//     void getInfo(string n, int a){
//         name = n;
//         age = a;
//     }
//     void display(){
//         cout<<name<<" "<<age<<endl;
//     }
// };
// int main(){
//     Student s1;
//     s1.getInfo("Tanveer", 19);
//     s1.display();
//

// #include <iostream>
// using namespace std;
// class Rectangle{
//     public:
//     double length;
//     double breadth;

//     Rectangle(double l, double b){
//         length= l;
//         breadth = b;
//     }

//     double area(){
//         return length*breadth;
//     }
// };
// int main(){
//     Rectangle r1(5.0,6.0);
//     Rectangle r2(8.0,7.0);
//     if(r1.area()>r2.area()){
//         cout<<"R1 is larger"<<endl;
//     }
//     else{
//         cout<<"R2 is larger"<<endl;
//     }
    
// }

// class Bankaccount{
//     private:
//     string name;
//     int balance;
//     int account_no;
    
//     public:
//     Bankaccount(string n, int b, int ac){
//         name = n;
//         balance= b;
//         account_no = ac;
//     }

//     int deposit(int amount){
//         balance+=amount;
//         return balance;
//     }
//     int withdrawl(int amount){
//         if(amount>balance){
//             cout<<"Insufficient balance";
//         }
//         else{
//             balance-=amount;
//             return balance;
//         }
//     }


// };

// #include <iostream>
// using namespace std;
// class Rectangle{
//     private:
//     int length;
//     int breadth;

//     public:
//     void setData(int l, int b){
//         if(l>0 && b>0){
//             length = l;
//             breadth = b;
//         }
//         else{
//             cout<<"Invalid Input";
//         }
//     }

//     int area(){
//         return length*breadth;
//     }
// };



// #include <iostream>
// using namespace std;
// class Bankaccount{
//     private:
//     string name;
//     int accno;
//     double balance;
//     static int count;

//     public:
//     Bankaccount(string n, int ac, double bal){
//         accno = ac;
//         name = n;
//         balance = bal;
//     }

//     void deposit(double amount){
//         if(amount>0){
//             balance +=amount;
//         }
//     }
//     void withdraw(double amount){
//         if(amount<balance){
//             balance-=amount;
//         }
//     }
//     void display(){
//         cout<<"Balance: "<<balance<<endl;
//         cout<<"Name: "<<name<<endl;
//     }

// };


//number of vowels in a string
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     cin>>str;
//     int count = 0;
//     for(int i = 0;str[i]!='\0';i++){
//         if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
//            str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
//             count++;
//         }
//     }
//     cout<<"Number of vowels: "<<count;

// }

//reverse the words in a string
// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the words: ";
//     cin>>str;
//     int length = str.length();
//     for(int i = length -1;i>=0;i--){
//         cout<<str[i];
//     }

// }

//prime number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int flag = 1;//prime
//     if(n<2){
//         cout<<"Enter a number greater than 2.";
//     } 
//     else{
//         for(int i = 2;i<n/2;i++){
//             if(n%i==0){
//                 flag = 0;//not prime
//                 break;
//             }
//         }
//     }
//     if(flag){
//         cout<<n <<" is prime"<<endl;
//     }
//     else{
//         cout<<n <<" isn't prime";
//     }
// }

//string is palindrome or not
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter the String: ";
//     cin>>str;
//     int length = str.length();
//     int palindrome = 0;//not palindrome
//     for(int i = 0; i < length/2; i++){
//         if(str[i] != str[length-1-i]){
//             palindrome = 0;
//             break;
//         } else {
//             palindrome = 1;
//         }
//     }
//     if(palindrome){
//         cout<<"Palindrome"<<endl;
//     }
//     else{
//         cout<<"Not Palindrome";
//     }
// }

//frequency of lowercase character in string 
// #include <iostream>
// #include <string.h>
// using namespace std;
// int main(){
//     string str;
//     cout<<"Enter a string: ";
//     cin>>str;
//     int count = 0;
//     int length = str.length();
//     for(int i = 0;i<length;i++){
//         if(islower(str[i])){
//             count++;
//         }
//     }
//     cout<<"Number of lowercase characters: "<<count;
// }

// class Student{
//     private:
//     int age;
//     string name;

//     public:
//     void setData(int a, string n){
//         age = a;
//         name = n;
//     }

//     void getinfo(){
//         cout<<"Name: "<<name<<endl;
//         cout<<"Age: "<<age<<endl;
//     }
// };

//factorial using a loop
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int fact = 1;
//     for(int i = n;i>0;i--){
//         fact = fact*i;
//     }
//     cout<<fact;
// }

//sum of digits of a number
// #include <iostream>
// using namespace std;
// int sum_digits(int n){
//     if(n<10){
//         return n;
//     }
//     else{
//         return n%10 +sum_digits(n/10);
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     int result = sum_digits(n);
//     cout<<result;
// }

//palindrome
// #include <iostream>
// using namespace std;
// int main(){
//     int n, rem, rev=0;
//     cin>>n;
//     int org = n;
//     while(n>0){
//         rem = n%10;
//         rev = rev*10+ rem;
//         n/=10;
//     }
//     if(org == rev){
//         cout<<"Palindrome";
//     }
//     else{
//         cout<<"No";
//     }
// }

// #include <iostream>
// using namespace std;
// class Circle{
//     private:
//     int radius;

//     public:
//     Circle(int r){
//         radius = r;
//     }
//     int area(int r){
//         return 3.14*r*r;
//     }
// };
// int main(){
//     Circle c(7);
//     cout << c.area(7);
// }