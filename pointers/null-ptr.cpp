#include <iostream>
using namespace std;

int main() {
    int *ptr = NULL;
    cout << ptr << endl;

//  cout << *ptr << endl;  error: segmentation fault
    return 0;
}