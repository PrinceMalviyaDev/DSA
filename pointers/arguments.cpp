#include <iostream>
using namespace std;

void changeA(int a) {
    a = 20;
    cout << a << endl;  // 20
}

void changeB(int *a) {
    *a = 30;
}

int main(){
    int a = 10;
    int *ptr = &a;

    changeA(a);  // pass by value
    cout << a << endl;   // 10

    changeB(ptr);  // pass by reference
    cout << a;   // 30

    return 0;
}