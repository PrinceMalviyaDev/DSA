#include <iostream>
using namespace std;

int main(){
    int arr[50];   // initialized with garbage value at all the indices

    int nums1[50] = {1,2,3,4,5}; // remaining indices are initialized by zero

    int nums[] = {1, 2, 3, 4, 5};

    cout << nums[6] << endl;   //undefined behaviour
    cout << nums[2] << endl;   // 3

    cout << sizeof(nums1) / sizeof(int) << endl;  //200
 
    cout << nums1[5]; // 0

    return 0;
}