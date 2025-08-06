// #include <iostream>
// using namespace std;
// class demo
// {
//     public:
//     static int counter;
//     demo() { counter++; }
// };
// int demo::counter=0;
// int main(){
//     demo a,b;
//     std::cout<<demo::counter<<std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// class Test{
//     public:
//     static int square(int x){
//         return x*x;
//     }
// };
//     int main(){
//         std:: cout<<Test::square(5)<<std::endl;
//         return 0;
//     }

//easy1
#include <iostream>
using namespace std;
class SecretHolder{
    private:
    int secret = 11;
    public:
    int get(){ return secret;}
};
int main(){
    SecretHolder s;
    std::cout<<s.get()<<std::endl;
    return 0;
}