#include <iostream>
using namespace std;

int main(){
    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3; // address of 4

    cout << *ptr2 << endl;  // 4
    cout << *ptr1 << endl;  // 1

    cout << ptr2 - ptr1 << endl; // 3
    return 0;
}