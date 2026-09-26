#include <iostream>
using namespace std;

int main(){
    int a = 25;
    int *ptr = &a;
    
    int b = 35;
    ptr = &b;

    cout << *ptr << endl; //35

    //but in case of an array pointer it is a constant and read only value

    int arr[5];

    cout << arr << endl;  // address of 0th index

    // arr = &b;  this is not allowed since the array pointer is a constant and read only value

    return 0;
}