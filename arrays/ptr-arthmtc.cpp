#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    ptr++; // +4 bytes because pointer is of int type
    cout << ptr << endl;    
    ptr += 3; //+12 bytes
    cout << ptr << endl;   
    return 0;
}