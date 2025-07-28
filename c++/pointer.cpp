#include <iostream>
using namespace std;
int main(){
    int x = 10;
    int *ptr = &x;
    int **pptr = &ptr;
    int ***ppptr = &pptr;
    cout<<ptr;
    return 0;
}