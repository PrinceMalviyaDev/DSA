#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    // int * ptr = &a;
    // int* ptr = &a;
    // int*pt = &a;

    int **pptr = &ptr;

    float pi = 3.14;
    float *ptr2 = &pi;

    cout << &a << " = " << ptr << endl;
    cout << &pi << " = " << ptr2 << endl;
    cout << &ptr << " = " << pptr << endl;

    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr2) << endl;
    cout << sizeof(pptr) << endl;

    return 0;
}