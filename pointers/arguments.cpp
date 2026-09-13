#include <iostream>
using namespace std;

// pass by value
void changeA(int a) {
    a = 20;
    cout << a << endl;  // 20
}

// pass by referrence using pointer
void changeB(int *a) {
    *a = 30;
}

//pass by referrence using referrence variable
void changeC(int &a) {
    a = 40;
}
int main(){
    int a = 10;
    int *ptr = &a;

    changeA(a);  // pass by value
    cout << a << endl;   // 10

    changeB(ptr);  // pass by reference using pointer
    cout << a << endl;   // 30

    changeC(a);   // pass by reference using reference variable
    cout << a; //40

    return 0;
}