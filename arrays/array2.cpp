#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 10;
}

void func2(int *ptr){
    ptr[0] = 10;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    
    cout << arr << endl;
    cout << *arr << endl;
    cout << *(arr+1) << endl;

    func(arr);  // passing the array name is equivalent to passing the pointer
    cout << arr[0];

    return 0;
}