#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << &a << " = " << ptr << endl;
    cout << *(&a) << " = " << *ptr << endl;   // 10 - dereferencing the address

    *ptr = 20;  // modifying using the dereference operator
    cout << *ptr << endl;

    return 0;
}